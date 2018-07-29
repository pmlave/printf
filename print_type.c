#include "holberton.h"
#include <stdio.h>
void print_char(char *s)
{
	char *buf = s;

	write(1, buf, 1);
}
/*
void print_string(char *s)
{
	int i = 0;
	char *buf;

	while (s[i] != NULL)
	{
		buf[i] = s[i];
	}
}
/**/
