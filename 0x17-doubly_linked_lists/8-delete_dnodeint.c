#include "lists.h"

/**
 *
 *
 *
 *
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	if (index == 0)
	{
		if (!tmp)
			return (-1);
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < index)
	{
		if ((i < index - 1) && (!tmp))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);
	return (1);
}
