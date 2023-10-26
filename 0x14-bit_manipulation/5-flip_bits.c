#include "main.h"

/**
 * flip_bits - A function that returns the number of
 * bits you would need to get from one to another
 *
 * @n: number
 * @m: number flipped to n.
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int bit_count = 0;

	while (xor_result > 0)
	{
		bit_count += xor_result & 1;
		xor_result >>= 1;
	}

	return (bit_count);
}
