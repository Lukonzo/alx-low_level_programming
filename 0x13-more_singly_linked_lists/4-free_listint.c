#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 *
 * @head: head
 *
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
