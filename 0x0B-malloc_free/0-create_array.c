#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array
 * and initializes it with a specific character
 *
 * @size: size of the array.
 * @c: the character to initialize an array c.
 * Return: NULL if size = 0, a pointer to
 * the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *y;
	unsigned int m;

	if (size == 0)
		return (NULL);
	y = malloc(sizeof(char) * size);

	if (y == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		y[m] = c;

	return (y);
}
