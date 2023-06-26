#include <stdio.h>

/**
 * swap_int - swap content of variables
 * @a: the frist variable
 * @b: the second variable
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
