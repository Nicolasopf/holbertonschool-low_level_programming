#include "lists.h"

/**
 * listint_len - print the number of elements in a linked list
 * @h: pointer to list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
