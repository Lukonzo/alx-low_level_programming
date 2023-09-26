#include "lists.h"

/**
 * listint_len - A  function that returns the number
 * of elements in a linked listint_t list
 *
 * @h: linked list
 *
 * Return: number of elements in a linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t elem = 0;

	while (h)
	{
		elem++;
		h = h->next;
	}
	return (elem);
}
