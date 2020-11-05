#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node in specific position
 * @head: pointer to pointer to head
 * @index: index to delete node
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tt, *tmp;
	unsigned int i = 1;

	if (*head)
	{
		tt = *head;
		if (index > 0)
		{
			while (i <= index - 1 && tt)
			{
				tt = tt->next;
				i++;
				if (!tt)
					return (-1);
			}
			tmp = tt->next;
			tt->next = tmp->next;
			free(tmp);
			return (1);
		}
		else
		{
			*head = tt->next;
			free(tt);
			return (1);
		}
	}
	return (-1);
}
