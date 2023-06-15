#include "lists.h"

/**
 * dlistint_len_1 - computing length of the double linked list
 * @h: head
 * Return: size of a list
 */

size_t dlistint_len_1(const dlistint_t *h)
{
	const dlistint_t *currnt = h;
	size_t size = 0;

	while (currnt != NULL)
	{
		currnt = currnt->next;
		size++;
	}

	return (size);
}

/**
 * insert_dnodeint_at_index - insert a node at index
 *
 * @h: head
 * @idx: the index to insert at
 * @n: the data n for the new node
 * Return: a pointer of the newly created node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nd;
	dlistint_t *currnt, *next;

	if (h == NULL || idx > dlistint_len_1(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len_1(*h))
		return (add_dnodeint_end(h, n));

	currnt = *h;
	while (idx > 1)
	{
		currnt = currnt->next;
		idx--;
	}

	next = currnt->next;

	new_nd = malloc(sizeof(dlistint_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;
	new_nd->prev = currnt;
	new_nd->next = next;
	currnt->next = new_nd;
	next->prev = new_nd;

	return (new_nd);
}
