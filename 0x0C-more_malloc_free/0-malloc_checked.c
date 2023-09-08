#include "main.h"

/**
 * malloc_checked - A function that allocates memory
 * using malloc.
 *
 * @b: input
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(b);

	return (p);
}
