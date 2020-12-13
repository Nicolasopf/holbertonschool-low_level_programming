#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at specific index.
 * @h: head of the list.
 * @n: Number passed for the node.
 * @idx: Index of the node
 * Return: The new node at specific position or NULL.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;
	unsigned int i = 0;

	if (idx == 0 || !*h)
		return (add_dnodeint(h, n));
	new = malloc(sizeof(dlistint_t));
	while (i < idx - 1)
	{
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (i == idx - 1 && !tmp->next)
		return (add_dnodeint_end(h, n));
	new->n = n;
	if (tmp->next)
		new->next = tmp->next;
	else
		new->next = NULL;
	tmp->next->prev = new;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
