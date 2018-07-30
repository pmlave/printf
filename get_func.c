#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

void (*get_func(char s))(va_list)
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
	return (NULL);
}
