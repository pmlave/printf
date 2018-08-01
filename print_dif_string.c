#include "holberton.h"
/**
 * print_dif_string - print a string that accounts for unprintable characters
 * @list: Va_list values
 * Return: Number of characters printed
 */
int print_dif_string(va_list list)
{
	char *c = va_arg(list, char *);

	int i = 0;


	if (c == NULL)
		c = "(null)";
	while (c[i] != '\0')
	{
		if ((c[i] < 32 && c[i] > 0) || c[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar((hex_help(c[i] / 0x10)));
			_putchar((hex_help(c[i] % 0x10)));
			i += 4;
		}
		else
			_putchar(c[i]);
		i++;
	}

	return (i);
}
