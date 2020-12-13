#include "lists.h"

/**
 * sum_dlistint - Sums the nodes.
 * @head: head of the list.
 * Return: the sumatory of nodes
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
