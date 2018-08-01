#include "holberton.h"
#include <stdarg.h>
/**
 * get_func - pointer to function to print value
 * @s: Character passed in to compare
 * Return: Number of items printed
 */
int (*get_func(char s))(va_list)
{
	specs_t specs[] = {
		{'s', print_string},
		{'c', print_char},
		{'i', print_number},
		{'d', print_number},
		{'b', print_binary},
		{'r', print_reverse},
		{'R', _rot13},
		{'u', print_unsigned},
		{'o', print_octal},
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
