#ifndef _HOLBRTON_H_
#define _HOLBERTON_H_
typdef struct specs
{
	char *specifier;
	void (*func)(char *);
} specs_t;

int _printf(const char *format, ...);
int _putchar(char c);
void (*get_func(char *s))(char *);
void print_char(char *s);
void print_string(char *s);
#endif /* _HOLBERTON_H_ */
