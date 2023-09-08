#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory
 * for an array using malloc.
 *
 * @nmemb: array.
 * @size: size.
 *
 * Return: Always 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int m;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (m = 0; m < (nmemb * size); m++)
		s[m] = 0;
	return (s);
}
