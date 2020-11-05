#include "lists.h"

/**
 * pop_listint - functionat thatdeletes the head node of a linked list.
 * @head: pointer to last head
 * Return: the head node's tdata
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int intmp = 0;

	tmp = *head;
	if (temp)
	{
		intmp = tmp->n;
		*head = (*head)->next;
		free(tmp);
	}
	return (intmp);
}
