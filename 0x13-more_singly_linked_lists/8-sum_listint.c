#include "lists.h"

/**
 * sum_listint - returns the sum of the data in a linked list
 * @head: pointer to last head
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
