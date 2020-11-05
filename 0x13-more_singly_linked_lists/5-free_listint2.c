#include "lists.h"

/**
 * free_listint2 - Fres a lsit and set head as NULL
 * @head: pointer to the begin of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
	}
	head = NULL;
}
