#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * print_char - printing a single character
 * @list: Va_list of values
 * Return: Int of number of characters
 */
int print_char(va_list list)
{
	char c = va_arg(list, int);

	write(1, &c, 1);
	return (1);
}
/**
 * print_string - print a string of characters
 * @list: Va_list of values
 * Return: Number of characters printed
 */
int print_string(va_list list)
{
	char *c = va_arg(list, char *);
	int i = 0;

	if (c == NULL)
		c = "(null)";
	while (c[i] != '\0')
		i++;
	write(1, c, i);
	return (i);
}
/**
 * print_number - print a numner
 * @list: Va_list of values
 * Return: Number of characters printed
 */
int print_number(va_list list)
{
	unsigned int result;
	int div = 1;
	int input, count = 0;

	input = va_arg(list, int);

	if (input < 0)
	{
		_putchar('-');
		result = input * -1;
		count++;
	}
	else
		result = input;

	while (result / div > 9)
		div = div * 10;

	while (div != 0)
	{
		_putchar(result / div + '0');
		result = result % div;
		div = div / 10;
		count++;
	}
	return (count);
}
/**
 * print_binary - converts int to binary
 * @list: va_list of values
 * Return: number of characters printed
 */
int print_binary(va_list list)
{
	unsigned int a = va_arg(list, unsigned int);
	int count = 0;
	int div = 1;
	int result = binary_help(a);

	if (_isdigit(a))
	{
		while (result / div > 9)
			div = div * 10;

		while (div != 0)
		{
			_putchar(result / div + '0');
			result = result % div;
			div = div / 10;
			count++;
		}
		return (count);
	}
	return (0);
}
