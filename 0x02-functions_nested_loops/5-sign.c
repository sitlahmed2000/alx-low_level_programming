#include "main.h"

/**
 * print_sign - checks for alphabetic character
 * @n: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
