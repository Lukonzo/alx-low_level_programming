#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 * node of a listint_t linked list
 *
 * @head: first node in the linked list
 * @index: index of the node
 *
 * Return: NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int m = 0;

	while (tmp && m < index)
	{
		tmp = tmp->next;
		m++;
	}
	return (tmp ? tmp : NULL);
}
