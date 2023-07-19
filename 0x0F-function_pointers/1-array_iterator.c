#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function given parameter
 * on each element of array
 * @array: array iterate over
 * @size: size the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (!array || !action)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
