#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array
 * of integers.
 *
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *p, m, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	p = malloc(sizeof(int) * n);
	if (p == NULL)
		return (NULL);
	for (m = 0; m < n; m++, min++)
	{
		p[m] = min;
	}
	return (p);
}
