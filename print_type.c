#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

void print_char(char *s)
{
	char *buf = s;

	write(1, buf, 1);
}
