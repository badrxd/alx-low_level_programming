#include "lists.h"

/**
 * add_dnodeint - adding a node in the beginning
 * @head: head
 * @n:  data
 * Return: pointer to the new created node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nd = malloc(sizeof(dlistint_t));

	if (!new_nd)
		return (NULL);

	new_nd->prev = NULL;
	new_nd->next = NULL;
	new_nd->n = n;

	if (!*head)
	{
		*head = new_nd;
		return (new_nd);
	}
	new_nd->next = *head;

	(*head)->prev = new_nd;
	*head = new_nd;

	return (new_nd);
}
