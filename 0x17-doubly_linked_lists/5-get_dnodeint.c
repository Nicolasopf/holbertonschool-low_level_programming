#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at an index
 * @head: head of the list
 * @index: index of the node
 * Return: NULL or the node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t tmp = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		tmp = tmp->head;
		if (!tmp)
			return (NULL);
	}
	return (tmp);
}
