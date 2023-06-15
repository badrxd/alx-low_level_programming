#include "lists.h"

/**
 * dlistint_len - computing length of a double linked list
 * @h: head
 * Return: the size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *currnt = h;

	if (!currnt)
		return (0);
	while (currnt)
	{
		currnt = currnt->next;
		size++;
	}
	return (size);
}
