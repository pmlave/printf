#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct specs - struct for format specifiers
 *
 * @specifier: the specifier
 * @func: the function it points to
 */
typedef struct specs
{
	char specifier;
	int (*func)(va_list);
} specs_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(char s))(va_list);
int print_char(va_list list);
int print_string(va_list list);
#endif /* _HOLBERTON_H_ */
