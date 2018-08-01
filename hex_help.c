#include "holberton.h"
/**
 * hex_help - conversion for hex characters
 * @n: Not 100% sure
 * Return: The hex value
 */
char hex_help(unsigned int n)
{
	if (n < 10)
	{
		return (n + '0');
	}
	else
	{
		return ((n - 10) + 'A');
	}

}
