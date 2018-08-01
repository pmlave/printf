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
	int a, b = 0;

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
/**
 * _rot13 - translate something into rot13
 * @list: Va_list values
 * Return: Number of characters printed
 */
int _rot13(va_list list)
{
	char *s = va_arg(list, char *);
	int i;
	int j;
	int x;
	char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *c = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i])
	{
		x = 0;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(c[j]);
				i++;
				x = 1;
				break;
			}
		}
		if (x != 1)
		{
			_putchar(s[i]);
			i++;
		}
	}
	return (i);
}
