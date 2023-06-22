#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @l: for check is uppercase or not
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int l)
{
	if (l >= 'A' && l <= 'Z')
	{
		return (1);
	}
	return (0);
}
