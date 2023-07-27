#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return the number elements in linked list
 * @h: pointer to the list_t list
 *
 * Return: number elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
