#include "main.h"

/**
 * set_bit - A function that sets the
 * value of a bit to 1 at a given index
 *
 * @n: pointer to a number
 * @index: the index, starting from 0
 * of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
	{
		return (-1);
	}

	for (m = 1; index > 0; index--, m *= 2)
		;
	*n += m;

	return (1);
}
