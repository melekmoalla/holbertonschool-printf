#include "main.h"
/**
 * _printf - function to print any thing we want
 * @format: const char
 * Return: 0 or len
 */
int _printf(const char *format, ...)
{
	op_t ops[] = {{'c', printf_char}, {'s', printf_st}, {'%', printf_persent},
	{'d', printf_de}, {'i', printf_de}, {'r', printf_rev}};
	int i = 0, z = 0, b = 0, len = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (z = 0; format[z] != '\0' && format != NULL; z++)
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
				for (i = 0; i < 6; i++)
					if (format[z] == ops[i].opp)
					{
						len += ops[i].f(args);
						break;
					}
				if (i == 6)
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
