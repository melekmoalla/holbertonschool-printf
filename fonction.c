#include "main.h"

int printf_char(va_list args)
{
    int a;
    a = printf("%c", va_arg(args, int));
    return (a);
}
int printf_st(va_list args)
{
    int a;
    char *st = va_arg(args, char *);
    a = printf("%s", st);
    return (a);
}
int printf_persent()
{
    putchar('%');
    return (1);
}

int _printf(const char *format, ...)
{

    op_t ops[] = {
        {'c', printf_char},
        {'s', printf_st},
        {'%', printf_persent}};

    int i = 0;
    int z = 0;
    int b = 0;
    int len = 0;

    va_list args;

    va_start(args, format);
    if (format == NULL)
    {
        return (-1);
    }
    while (format != 0 && format[z] != '\0')
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
                while (i < 3)
                {
                    if (format[z] == ops[i].opp)
                    {
                        len += ops[i].f(args);
                        break;
                    }
                    i++;
                }

                if (i == 3)
                {
                    b = b - 1;
                    z = z - 1;
                    putchar(format[z]);
                }
            }
        }
        else
        {
            putchar(format[z]);
        }

        i = 0;
        z++;
    }
    if (len != 0)
    {
        return (len);
    }
    z = z - b;
    va_end(args);
    return (z);
}
