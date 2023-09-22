#include "lists.h"

/**
 * list_len - A function that returns the number
 * of elements in a linked list_t list
 *
 * @h: pointer to a list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a = a + 1;
		h = h->next;
	}
	return (a);
}
