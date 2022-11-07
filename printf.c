#include "main.h"

/**
 * printf_char - Entry point
 *@argc:va_list
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
 *@argc:va_list
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
 *@argc:va_list
 * Return: 1
 */
int printf_persent()
{
    putchar('%');
    return (1);
}
