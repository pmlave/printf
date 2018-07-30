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
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("Unknown:[%ras]\n");
	printf("Unknown:[%ras]\n");
	_printf("%s %s %s\n", "Hello", "World");
	printf("%s %s %s\n", "Hello", "World");
	_printf("%s\n", "Hello", "World");
	printf("%s\n", "Hello", "World");
	return (0);
}
