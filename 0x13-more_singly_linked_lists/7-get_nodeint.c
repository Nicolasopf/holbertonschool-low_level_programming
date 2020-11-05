#include "lists.h"

/**
 * get_nodeint_at_index - print the node of the index
 * @head: pointer to head
 * @index: index of the node
 * Return: Return the head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			head = head->next;
			if (!head)
				return (NULL);
		}
		return (head);
	}
	return (NULL);
}
