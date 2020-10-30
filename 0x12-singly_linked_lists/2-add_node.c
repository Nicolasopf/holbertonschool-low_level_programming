#include "lists.h"

/**
 * add_node - Adds a new node
 * @head: pointer to list
 * @str: string
 * Return: pointer to head or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
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
