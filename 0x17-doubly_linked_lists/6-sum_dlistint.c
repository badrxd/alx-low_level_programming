#include "lists.h"

/**
 * sum_dlistint - get the sum of all n in the nodes
 * @head: a head of the list
 *
 * Return: sum of all n in nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currnt;
	int sum = 0;

	currnt = head;
	while (currnt)
	{
		sum += currnt->n;
		currnt = currnt->next;
	}
	return (sum);
}
