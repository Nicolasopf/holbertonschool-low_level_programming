#include "lists.h"

/**
 *
 *
 *
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		while (i < index)
		{
			head = head->next;
			if (!head)
				return (NULL);
		}
		return (head);
	}
	return (NULL);
}
