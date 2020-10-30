#include "lists.h"

/**
 *
 *
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	size_t n;

	list_t *nombre;
	if (!head)
	{
		return (NULL);
	}
	while (str[i])
		i++;
	nombre = malloc(sizeof(list_t));
	if (!nombre)
		return (NULL);
	nombre->str = strdup(str);
	nombre->len = i;
	nombre->next = *head;
	*head = nombre;
	return (*head);
}
