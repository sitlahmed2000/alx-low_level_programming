#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to the first node the list
 *
 * Return: pointer to the first node the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *after = NULL;

	while (*head)
	{
		after = (*head)->after;
		(*head)->after = before;
		before = *head;
		*head = after;
	}

	*head = before;

	return (*head);
}
