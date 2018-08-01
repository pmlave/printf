#include "holberton.h"
/**
 * print_octal - prints a number in octal format
 * @list: Va_list value
 * Return: Int of characters printed
 */
int print_octal(va_list list)
{
	int a = va_arg(list, int);
	int oct;
	int count = 0;
	int div = 1;

	oct = octal_help(a);
	while (oct / div > 9)
		div = div * 10;

	while (div != 0)
	{
		_putchar(oct / div + '0');
		oct = oct % div;
		div = div / 10;
		count++;
	}
	return (count);
}
