#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 *
 * @head: a head of the list
 * @index: an index to delete the node at
 * Return: 1 if deleted, -1 if didn't
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currnt = *head;

	if (!currnt)
		return (-1);

	if (index == 0)
	{
		*head = currnt->next;
		if (currnt->next)
			currnt->next->prev = NULL;
		free(currnt);
		return (1);
	}

	while (index > 0 && currnt)
	{
		currnt = currnt->next;
		index--;
	}

	if (!currnt)
		return (-1);

	if (currnt->prev)
		currnt->prev->next = currnt->next;

	if (currnt->next)
		currnt->next->prev = currnt->prev;

	free(currnt);
	return (1);
}
