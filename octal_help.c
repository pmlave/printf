#include "holberton.h"
/**
 * octal_help - printing a number in octal form
 * @a: number given from va_arg value
 * Return: Octal number
 */
int octal_help(int a)
{
	if (a == 0)
		return (0);
	else
		return (a % 8 + 10 * octal_help(a / 8));
}
