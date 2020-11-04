#include "lists.h"

/**
 * add_nodeint_end - add a enw node at the end
 * @head: Pointer to the head
 * @n: element of list
 * Return: the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *new = NULL;

	last = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (*head);
}
