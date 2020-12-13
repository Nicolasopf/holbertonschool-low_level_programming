#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at specific index.
 * @head: head of the list.
 * @index: index of the node.
 * Return: 1 or -1 if error.
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next)
			tmp->next->prev = NULL;
		free(tmp);
		return (1);
	}
	while (i < index)
	{
		if (!tmp->next)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	if (!tmp->next)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
