#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 *
 * @a: the square matrix.
 *
 * @size: size.
 */

void print_diagsums(int *a, int size)
{
	int m, sum = 0, sum1 = 0;

	for (m = 0; m < size; m++)
	{
		sum += a[m];
		sum1 += a[size - m - 1];
		a += size;
	}
	printf("%d, ", sum);
	printf("%d\n", sum1);
}
