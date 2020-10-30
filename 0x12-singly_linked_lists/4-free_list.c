#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to the list
 */

void free_list(list_t *head);
{
	if (head)
	{
		while (head)
		{
			free(head->str);
			free(head);
			head = head->next;
		}
	}
}
