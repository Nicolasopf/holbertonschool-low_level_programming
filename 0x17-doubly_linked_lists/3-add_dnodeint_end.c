#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of a list
 * @head: Head of the list.
 * @n: node value.
 * Return: the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *new;

	if (*head == NULL)
		return (add_dnodeint(head, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	last = *head;
	while (last)
	{
		if (!last->next)
		{
			new->n = n;
			last->next = new;
			new->next = NULL;
			new->prev = last;
			return (new);
		}
		last = last->next;
	}
	return (new);
}
