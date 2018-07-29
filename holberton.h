#ifndef _HOLBRTON_H_
#define _HOLBERTON_H_
typdef struct specs
{
	char *specifier;
	void (*func)(char *);
} specs_t;

int _printf(const char *format, ...);
int _putchar(char c);
#endif /* _HOLBERTON_H_ */
