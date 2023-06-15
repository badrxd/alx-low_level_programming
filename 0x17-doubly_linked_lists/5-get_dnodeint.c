#include "lists.h"

/**
 * get_dnodeint_at_index - Get the dnodeint at the index object
 * @head: the head of the list
 * @index: an index to get the dnondeint from
 * Return: a node in that index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currnt;

	currnt = head;

	while (index > 0 && currnt)
	{
		index--;
		currnt = currnt->next;
	}
	return (currnt);
}
