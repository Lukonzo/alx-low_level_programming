#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new
 * node at the end of a listint_t list
 *
 * @head: pointer to the linked list
 * @n: element
 *
 * Return: the address of the new element
 * or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *elem;
	listint_t *tmp = *head;

	elem = malloc(sizeof(listint_t));
	if (!elem)
		return (NULL);
	elem->n = n;
	elem->next = NULL;

	if (*head == NULL)
	{
		*head = elem;
		return (elem);
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = elem;
	return (elem);
}
