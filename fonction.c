#include "main.h"
/**
 * _printf - Entry point
 * @format: const char
 * Return: 0 or len or z
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {{'c', printf_char}, {'s', printf_st}, {'%', printf_persent}, {'d', printf_de}, {'i', printf_int}};
	int i = 0, z = 0, b = 0, len = 0;

	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (z = 0; format[z] != '\0'; z++)
	{
		if (format[z] == '%')
		{
			z++;
			b++;
			if (format[z] == '\0')
			{
				return (-1);
			}
			else
			{
				for (i = 0; i < 5; i++)
					if (format[z] == ops[i].opp)
					{
						len += ops[i].f(args);
						break;
					}
				if (i == 5)
				{
					b = b - 1;
					z = z - 1;
					putchar(format[z]);
				}
			}
		}
		else
			putchar(format[z]);
	}
	len += z - (b * 2);
	return (len);
	va_end(args);
}
