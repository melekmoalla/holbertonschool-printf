#include "main.h"

/**
 * printf_char - Entry point
 *@args:va_list
 * Return: a
 */
int printf_char(va_list args)
{
	int a;

	a = printf("%c", va_arg(args, int));
	return (a);
}
/**
 * printf_st - Entry point
 *@args:va_list
 * Return: a
 */
int printf_st(va_list args)
{
	int a;

	char *st = va_arg(args, char *);

	a = printf("%s", st);
	return (a);
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
 * printf_persent - Entry point
 * *@args:va_list
 * Return: 1
 */
int printf_integer(__attribute__((unused)) va_list args)
{
	putchar('%');
	return (1);
}
void printf_de(va_list args)
{
	printf("%d", va_arg(args, int));
}
void printf_int(va_list args)
{
	printf("%i", va_arg(args, int));
}



