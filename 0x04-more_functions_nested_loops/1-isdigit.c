#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @n: check is between 0 until 9
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}
