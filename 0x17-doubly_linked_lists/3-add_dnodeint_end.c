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

	new = malloc(sizeof(dlistint_t));
	if (*head == NULL)
		return (addd_dnodeint(head, n));
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

dlistint_t *addd_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (new);
}
