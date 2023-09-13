#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - A function that executes a function given
 * as a parameter on each element of an array
 *
 * @array: the array
 * @size: Size of the array
 * @action: the pointer to  be used
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	if (array != NULL && size > 0 && action != NULL)
		for (m = 0; m < size; m++)
			action(array[m]);
}
