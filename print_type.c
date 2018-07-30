#include "holberton.h"
#include <stdio.h>
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
	return (0);
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

	while (c[i] != '\0')
		i++;
	write(1, c, i);
	return (0);
}
