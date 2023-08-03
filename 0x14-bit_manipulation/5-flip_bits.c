#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bit convert one number to another number
 * @n: first number
 * @m: second number convert
 * Return: number bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diffent;
	int i;

	diffent = i ^ m;
	i = 0;

	while (diffent)
	{
		i++;
		diffent &= (diffent - 1);
	}

	return (i);
}

