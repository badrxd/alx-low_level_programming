#include "lists.h"

/**
 * free_dlistint - function to free the givin list
 *
 * @head: a head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *start, *next;

	start = head;
	while (start)
	{
		next = start->next;
		free(start);
		start = next;
	}
}
