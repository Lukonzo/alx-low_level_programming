#include "main.h"
#include <stdio.h>

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: pointer to a number
 * @index: the index
 * Return: 1 if it worked, or -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int position = index;

	if (index > 63)
	{
		return (-1);
	}

	while (position > 0)
	{
		i *= 2;
		position--;
	}

	if ((*n >> index) & 1)
	{
	*n -= i;
	}

	return (1);
}
