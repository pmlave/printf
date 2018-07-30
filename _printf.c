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

		for (i = 0; format && format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == ' ')
				{
					while (format[i + 1] == ' ')
						i++;
				}
				if (format[i + 1] == '%')
					_putchar('%');
				else if ((format[i + 1] != 'c' &&
					  format[i + 1] != 's'))
				{
					_putchar('%');
					_putchar(format[i + 1]);
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
		return (a);
}
