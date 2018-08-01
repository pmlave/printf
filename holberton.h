#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
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
int print_number(va_list list);
int print_binary(va_list list);
int binary_help(unsigned int);
int _isdigit(unsigned int a);
int print_reverse(va_list list);
int _rot13(va_list list);
int print_unsigned(va_list list);
int print_octal(va_list list);
int octal_help(int a);
#endif /* _HOLBERTON_H_ */
