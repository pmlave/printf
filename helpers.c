#include "holberton.h"
#include <unistd.h>
/**
 * binary_help - converts int to binary
 * @a: Value set to va_arg value
 * Return: number of characters printed
 */
int binary_help(unsigned int a)
{
	if (a == 0)
		return (0);
	else
		return (a % 2 + 10 * binary_help(a / 2));
}
/**
 * _isdigit - checking if passed in value is a number
 * @i: Given value of va_arg passed in
 * Return: True if is number
 */
int _isdigit(unsigned int i)
{
	int div = 1;
	int a;

	while (i / div > 9)
		div = div * 10;

	while (div != 0)
	{
		a = i / div + '0';
		if (a > 57 || a < 48)
		{
			return (0);
		}
		else
		{
			i = i % div;
			div = div / 10;
		}
	}
	return (1);
}
/**
 * print_reverse - print the string in reverse
 * @list: List of va_list values
 * Return: Number of characters printed
 */
int print_reverse(va_list list)
{
	char *s = va_arg(list, char *);
	int a, b;

	if (s)
	{
		a = 0;
		while (s[a] != '\0')
			a++;
		a--;
		while (a >= 0)
		{
			_putchar(s[a]);
			a--;
			b++;
		}
	}
	return (b);
}
