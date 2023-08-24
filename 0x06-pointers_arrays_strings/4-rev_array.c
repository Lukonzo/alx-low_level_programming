#include "main.h"

/**
 * reverse_array - A function that reverses the
 * content of an array of integers
 *
 * @a: pointer to the integer array.
 * @n: the number of elements.
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, p, q;

	q = n - 1;

	for (p = 0; p < n / 2; p++)
	{
		temp = a[p];
		a[p] = a[q];
		a[q--] = temp;
	}
}
