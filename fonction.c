#include "main.h"

void printf_char(va_list args)
{
    printf("%c", va_arg(args, int));
}
void printf_st(va_list args)
{
    char *st = va_arg(args, char *);

    printf("%s", st ? st : "(nil)");
}
void printf_persent(va_list args)
{

    printf("%");
}

int _printf(const char *format, ...)
{

    op_t ops[] = {
        {'%', printf_persent},
        {'c', printf_char},
        {'s', printf_st}};

    int i = 0;
    int z = 0;

    va_list args;

    va_start(args, format);

    while (format != 0 && format[z] != '\0')
    {
        if (format[z] == '%')
        {
            z++;
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
            _putchar(format[i]);
        }
        i = 0;
        z++;
    }
    printf("\n");

    va_end(args);
    return (0);
}
