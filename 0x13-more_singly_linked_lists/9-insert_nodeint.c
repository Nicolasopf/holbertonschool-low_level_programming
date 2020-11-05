#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in specific position
 * @head: pointer to head
 * @idx: position of node
 * @n: data
 * Return: The new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (head)
	{
		temp = *head;
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		for (i = 1; i < idx; i++)
		{
			temp = temp->next;
			if (!temp)
				return (NULL);
		}
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
		}
		else
		{
			new->next = temp->next;
			temp->next = new;
		}
		return (new);
	}
	return (NULL);
}
