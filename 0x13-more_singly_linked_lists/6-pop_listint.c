#include "lists.h"

/**
 * pop_listint - functionat thatdeletes the head node of a linked list.
 * @head: pointer to last head
 * Return: the head node's tdata
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int intmp = 0;

	temp = *head;
	if (temp)
	{
		intmp = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (intmp);
}
