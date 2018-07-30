#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * get_func - pointer to evaluating function
 * @s: Character passed in to compare
 * Return: Number of characters printed
 */
int (*get_func(char s))(va_list)
{
	specs_t specs[] = {
		{'s', print_string},
		{'c', print_char},
		{'\0', NULL}
	};
	int i = 0;

	while (specs[i].specifier != '\0')
	{
		if (specs[i].specifier == s)
			return (specs[i].func);
		i++;
	}
	return (0);
}
