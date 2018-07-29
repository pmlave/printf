#include "holberton.h"
#include <stdio.h>

void (*get_func(char s))(char *)
{
	specs_t specs[] = {
		/*{"s", print_string},/*/
		{"c", print_char}
	};
	int i = 0;

	while (specs[i].specifier != NULL)
	{
		if (specs[i].specifier == s)
			return (specs[i].func);
		i++;
	}
	return (NULL);
}
