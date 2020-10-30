#include "lists.h"

/**
 *
 *
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;

	while (nombre->next != NULL)
		nombre = nombre->next;
	while (str[len])
		len++;
	if (!nombre)
		return (NULL);
	nombre = malloc(sizeof(list_t));
	nombre->str = strdup(str);
	nombre->len = len;
	nombre->next = *head;
	*head = nombre;
	return (*head);
}
