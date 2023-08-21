#include "main.h"

/**
 * swap_int - A function swaps the values of two integers.
 *
 * @a: first value of integer type.
 *
 * @b: second value.
 */

void swap_int(int *a, int *b)
{

	int c;

	c = *a;
	*a = *b;
	*b = c;
}
