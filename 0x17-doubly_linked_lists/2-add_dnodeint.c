#include "lists.h"

/**
 * add_dnodeint - Add a new node int to the head.
 * @head: head of the list.
 * @n: Integer passed.
 * Return: node to add.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return(NULL);
	new->n = n;
	new->next = *head;
	if (*head)
	    (*head)->prev = new;
	new->prev = NULL;
	*head = new;
	return (new);
}
