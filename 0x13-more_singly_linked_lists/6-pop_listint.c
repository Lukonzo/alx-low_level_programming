#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * node of a listint_t linked list
 *
 * @head: head
 *
 * Return: head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (num);
}
