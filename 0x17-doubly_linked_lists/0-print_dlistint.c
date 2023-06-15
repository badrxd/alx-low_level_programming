#include "lists.h"

/**
 * print_dlistint - printing data from doubly linked list
 * @h: the head
 * Return: the size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *currnt = h;

	if (!currnt)
		return (0);
	while (currnt)
	{
		printf("%d\n", currnt->n);
		currnt = currnt->next;
		size++;
	}
	return (size);
}
