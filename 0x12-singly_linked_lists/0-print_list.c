#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the elemants
 * of a list_t lsist
 *
 * @h: pointer to list_t list to print
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
