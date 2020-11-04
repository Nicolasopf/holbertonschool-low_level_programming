#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * @head: pointer to pointer to head
 * @n: int element
 * Return: new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *inte;

	inte = malloc(sizeof(listint_t));
	if (!inte)
		return (NULL);
	inte->n = n;
	inte->next = *head;
	*head = inte;
	return (inte);
}
