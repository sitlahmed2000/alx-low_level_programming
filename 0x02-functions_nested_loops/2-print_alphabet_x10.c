#include "main.h"
/**
 * print_alphabet_x10 - 10 times - print alphabet in lowercase
 *
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		x++;
	}
}
