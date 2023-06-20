#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int x = n;

	while (x < 99)
	{
		printf("%d", x);
		if (x != 98)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
}
