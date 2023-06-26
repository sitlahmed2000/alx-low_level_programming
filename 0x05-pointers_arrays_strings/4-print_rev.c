#include "main.h"
/**
 * print_rev - print reverse string
 * @s: the string that will reverse
 */

void print_rev(char *s)
{
	int l, n;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}

	n = l;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
