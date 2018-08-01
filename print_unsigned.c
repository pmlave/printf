#include "holberton.h"
/**
 * print_unsigned - prints and unsigned integer
 * @list: Va_list value
 * Return: Int of characters printed
 */
int print_unsigned(va_list list)
{
	unsigned int result = va_arg(list, unsigned int);
	unsigned int div = 1;
	int count = 0;

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
