#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits convert one number to another number
 * @n: first number
 * @m: second number to convert
 * Return: number bits that was needed  flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counters;

	diff = n ^ m;
	counters = 0;

	while (diff)
	{
		counters++;
		diff &= (diff - 1);
	}

	return (counters);
}
