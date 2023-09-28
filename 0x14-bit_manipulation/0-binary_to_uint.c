#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int totals, powers;
	int n;

	if (b == NULL)
	{
		return (0);
	}

	for (n = 0; b[n]; n++)
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}
	}

	for (powers = 1, totals = 0, n--; n >= 0; n--, powers *= 2)
	{
		if (b[n] == '1')
		{
			totals += powers;
		}
	}

	return (totals);
}
