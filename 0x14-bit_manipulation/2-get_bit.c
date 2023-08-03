#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of bit at given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n;

	if (index > 64)
		return (-1);

	n = n >> index;

	return (n & 1);
}
