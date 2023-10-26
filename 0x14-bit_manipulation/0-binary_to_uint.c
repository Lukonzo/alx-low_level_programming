#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that converts a
 * binary number to an unsigned int
 *
 * @b: pointer to a string
 *
 * Return: the converted number of 0 and 1 chars
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int total, pow;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (pow = 1, total = 0, len--; len >= 0; len--, pow *= 2)
	{
		if (b[len] == '1')
			total += pow;
	}

	return (total);
}
