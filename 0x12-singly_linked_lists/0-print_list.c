#include "lists.h"

/**
 * print_list - Print a list
 * @h: list to print
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		while (h)
		{
			if (!h->str)
				printf("[0] (nil)\n");
			else
				printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
