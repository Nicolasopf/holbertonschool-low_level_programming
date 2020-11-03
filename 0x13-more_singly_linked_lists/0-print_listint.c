#include "lists.h"

/**
 *
 *
 *
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
