#include<stdlib.h>
#include "lists.h"
#include<string.h>

/**
 * add_node_end - A function that adds a
 * new node at the end of a list_t list
 *
 * @head: double pointer to a list_t
 * @str: needs to be duplicated
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;
	list_t *temp = *head;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
