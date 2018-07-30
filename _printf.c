#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: the input
 *
 * Return: 0 (sucess)
 */
int _printf(const char *format, ...)
{
	int i, a = 0;
	va_list list;

	va_start(list, format);
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
					_putchar('%');
				else
					get_func(format[i + 1])(list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				a++;
			}
		}
		return (a);
}
