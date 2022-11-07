#include "main.h"

void printf_char(va_list args)
{
    printf("%c", va_arg(args, int));
}
void printf_st(va_list args)
{

    printf("%s", va_arg(args, int));
}
void printf_persent()
{

    printf("%");
}

int _printf(const char *format, ...)
{

    op_t ops[] = {
        {'c', printf_char},
        {'s', printf_st}};

    int i = 0;
    int z = 0;
    int b = 0;

    va_list args;

    va_start(args, format);

    while (format != 0 && format[z] != '\0')
    {

        if (format[z] == '%')
        {
            z++;
            b++;
            while (i < 2)
            {
                if (format[z] == ops[i].opp)
                {
                    ops[i].f(args);
                }
                i++;
            }
        }
        else
        {
            putchar(format[z]);
        }

        i = 0;
        z++;
    }
    z = z - b;
    va_end(args);
    return (z);
}
