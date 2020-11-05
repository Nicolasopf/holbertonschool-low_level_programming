#include "lists.h"

/**
 * free_listint2 - Fres a lsit and set head as NULL
 * @head: pointer to the begin of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
