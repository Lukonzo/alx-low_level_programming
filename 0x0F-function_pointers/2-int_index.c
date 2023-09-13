#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - A function that searches for an integer
 *
 * @array: array to be searched
 * @size: Array size
 * @cmp: pointer to a function
 *
 * Return:  index of the first element for which
 * the cmp function does not return 0, -1 if no
 * element matches, and -1 if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL)
	{return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
		{
			return (m);
		}
	}
	return (-1);
}
