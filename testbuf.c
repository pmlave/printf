#include <unistd.h>
void print_string(char *s)
{
	char *buf;
	int i = 0;
	while (s[i] != '\0')
	{
		buf[i] = s[i];
		i++;
	}
	write(1, buf, i);
}
