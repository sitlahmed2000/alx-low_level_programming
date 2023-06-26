#include "main.h"
/**
 * print_rev - print reverse string
 * @s: the string that will reverse
 */

void print_rev(char *s)
{
	int n = _strlen(s);

	while (n > 0)
	{
		_putchar(s[n]);
		n--;
	}
}
