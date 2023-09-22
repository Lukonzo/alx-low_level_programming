#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - A function that adds a new node
 * at the beginning of a list_t list
 *
 * @head: double pointer to list.
 * @str: string that is to be added to the node
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
