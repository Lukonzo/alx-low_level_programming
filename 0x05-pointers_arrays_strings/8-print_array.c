#include "stdio.h"
#include "main.h"

/**
 * print_array - prints n elements of an array
 * of integers, followed by a new line.
 *
 * @a: array.
 *
 * @n: number of items to be printed.
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m == 0)
			printf("%d", a[m]);
		else
			printf(",%d", a[m]);
	}
	printf("\n");
}
