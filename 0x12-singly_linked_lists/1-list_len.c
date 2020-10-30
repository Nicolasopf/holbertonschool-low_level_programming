#include "lists.h"

/**
 * list_len - Function to return num of elements in a
 * linked list
 * @h: list to print
 * Return: number of elements
 */

size_t list_len(const list_t *h)
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
