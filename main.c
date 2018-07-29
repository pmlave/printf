#include "holberton.h"

/**
 * main - produces output according to a format
 * @format: the input
 *
 * Return: 0 (sucess)
 */
int _printf(const char *format, ...)
{
	int i;
	va_list list;
	va_start(list, format)
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
				get_func (format[i + 1])(va_arg(list, char*));
			else
				_putchar(format[i]);
		}
	return (0);
}
