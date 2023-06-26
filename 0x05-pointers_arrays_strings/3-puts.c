#include "main.h"
/**
 * _puts - print string of letters
 * @str: the string will should print it
 */

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
