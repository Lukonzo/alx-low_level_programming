#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t linked list
 *
 * @head: node
 *
 * Return: the sum of all the data (n) of a
 * listint_t linked list. 0 if empty.
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
