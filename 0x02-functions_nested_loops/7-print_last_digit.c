#include "main.h"

/**
 * print_last_digit - checks for alphabetic character
 * @n: the character to be checked
 * Return: the corrent answer
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
