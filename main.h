#ifndef INV_TREE_H
#define INV_TREE_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdarg.h>

typedef struct op
{
    char opp;
    void (*f)(va_list);
} op_t;

int _putchar(char c);
int _printf(const char *format, ...);
#endif