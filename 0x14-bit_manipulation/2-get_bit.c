#include "main.h"
#include <stdio.h>

/**
 * get_bit - A function thatreturns the
 * value of a bit at a given index
 *
 * @n: number
 *
 * @index: The index starting from 0,
 * of the bit we want to get
 *
 * Return: Value of bit at index, or -1
 * if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
