#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum
 * of all its parameters
 *
 * @n: number of arguments
 *
 * Return: the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int m;
	int sum = 0;

	va_start(list, n);

	for (m = 0; m < n; m++)
		sum = +va_arg(list, int);

	va_end(list);

	return (sum);
}
