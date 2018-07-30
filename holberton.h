#ifndef _HOLBRTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
typedef struct specs
{
	char specifier;
	void (*func)(va_list);
} specs_t;

int _putchar(char c);
int _printf(const char *format, ...);
void (*get_func(char s))(va_list);
void print_char(va_list list);
void print_string(va_list list);
#endif /* _HOLBERTON_H_ */
