#include "main.h"
#include <math.h>
/**
 * printf_char - Entry point
 *@args:va_list
 * Return: a
 */
int printf_char(va_list args)
{
	int a = 0;

	putchar(va_arg(args, int));
	a++;
	return (a);
}
/**
 * printf_st - Entry point
 *@args:va_list
 * Return: a
 */
int printf_st(va_list args)
{
	int i = 0;

	char *st = va_arg(args, char *);

	if (st == NULL)
		st = "(null)";
	for (i = 0; st[i] != '\0'; i++)
		putchar(st[i]);
	return (i);
}
/**
 * printf_persent - Entry point
 * *@args:va_list
 * Return: 1
 */
int printf_persent(__attribute__((unused)) va_list args)
{
	putchar('%');
	return (1);
}
/**
 * printf_de - Entry point
 * *@args:va_list
 * Return: 1
 */
int printf_de(va_list args)
{
	long a, num;
	int i = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		num *= -1;
		putchar('-');
		i++;
	}

	a = 1;
	while ((num / a) >= 10)
	{
		a *= 10;
	}
	while (a != 0)
	{
		putchar((num / a) + '0');
		num = num - ((num / a) * a);
		a = a / 10;
		i++;
	}
	return (i);
}
