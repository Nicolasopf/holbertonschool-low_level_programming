#include "lists.h"

/**
 * print_dlistint - Print a list. 
 * @h: Header.
 * Return: Num of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int a = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
