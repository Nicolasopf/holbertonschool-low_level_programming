#include "lists.h"

/**
 * add_node_end - Add a node at the end
 * @head: pointer to list
 * @str: string
 * Return: nombre or NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
        unsigned int len = 0;
        list_t *nombre;
	if (!head)
		return (NULL);
        nombre = *head;
        while (nombre->next != NULL)
                nombre = nombre->next;
        while (str[len])
                len++;
        nombre = malloc(sizeof(list_t));
        if (!nombre)
                return (NULL);
        nombre->str = strdup(str);
        nombre->len = len;
        nombre->next = NULL;
        return (nombre);
}
