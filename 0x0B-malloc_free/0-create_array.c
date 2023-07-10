#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create array of chars,
 * and initialize it with specific char
 * @size: size the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL to the Error
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int n = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (n < size)
	{
		*(p + n) = c;
		n++;
	}

	*(p + n) = '\0';

	return (p);
}
