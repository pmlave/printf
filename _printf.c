#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
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

	if (format)
	{
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '\0')
				{
					va_end(list);
					return (-1);
				}
				if (format[i + 1] == ' ')
				{
					while (format[i + 1] == ' ')
						i++;
				}
				if (format[i + 1] == '%')
				{
					_putchar('%');
					a++;
				}
					else if (format[i + 1] != 'c' &&
						 format[i + 1] != 's' &&
						 format[i + 1] != 'i' &&
						 format[i + 1] != 'd' &&
						 format[i + 1] != 'b' &&
						 format[i + 1] != 'r' &&
						 format[i + 1] != 'R' &&
						 format[i + 1] != 'u' &&
						 format[i + 1] != 'o' &&
						 format[i + 1] != 'x' &&
						 format[i + 1] != 'X')
				{
					_putchar('%');
					_putchar(format[i + 1]);
					a += 2;
				}
				else
					a += get_func(format[i + 1])(list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				a++;
			}
		}
		va_end(list);
		return (a);
	}
	va_end(list);
	return (-1);
}
