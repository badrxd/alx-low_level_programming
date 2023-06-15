#include "lists.h"

/**
 * add_dnodeint_end - adding node in the end of list
 * @head: head
 * @n: data
 * Return: a pointer to the new created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *currnt;
	dlistint_t *new_nd = malloc(sizeof(dlistint_t));

	if (!new_nd)
		return (NULL);

	new_nd->prev = NULL;
	new_nd->n = n;
	new_nd->next = NULL;

	if (!*head)
	{
		*head = new_nd;
		return (new_nd);
	}
	currnt = *head;

	while (currnt->next)
		currnt = currnt->next;

	currnt->next = new_nd;
	new_nd->prev = currnt;

	return (new_nd);
}
