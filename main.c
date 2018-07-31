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
	int r;


	_printf("Character:[%c]\n", 'H');
	r = printf("Character:[%c]\n", 'H');
	printf("Number of characters printed %d\n", r);
	_printf("String:[%s]\n", "I am a string !");
	r = printf("String:[%s]\n", "I am a string !");
	printf("Number of characters printed %d\n", r);
	_printf("Percent:[%%]\n");
	r = printf("Percent:[%%]\n");
	printf("Number of characters printed %d\n", r);
	_printf("Unknown:[%r]\n");
	r = printf("Unknown:[%r]\n");
	printf("Number of characters printed %d\n", r);
	_printf ("%%%%%r\n", 'h');
	r = printf ("%%%%%r\n", 'h');
	printf("Number of characters printed %d\n", r);
	_printf();
	printf();
	return (0);
}
