#include "lists.h"

/**
 * print_listint - print the elements of a list
 * @h: pointer to list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	unsigned int a = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			a++;
		}
	}
	return (a);
}
