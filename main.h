#ifndef INV_TREE_H
#define INV_TREE_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdarg.h>

typedef struct op
{
	char opp;
	int (*f)(va_list);
} op_t;

int printf_char(va_list args);
int printf_st(va_list args);
int printf_persent();
int _printf(const char *format, ...);
#endif