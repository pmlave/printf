#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf(NULL, "Hello, World\n");
	printf(NULL, "Hello, World\n");
	_printf ("");
	printf ("");
	_printf ("\0");
	printf ("\0");
	_printf("%s", "He||0");
	printf("%s", "He||0e");
	printf("%    s\n", "Hello");
	_printf("%    s\n", "Hello");
	return (0);
}
