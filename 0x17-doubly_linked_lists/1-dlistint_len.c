#include "lists.h"

/**
 * dlistint_len - Prints the linked list length
 * @h: Head
 * Return: Num of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
