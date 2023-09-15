#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - A function that prints
 * numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list list;

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		printf("%i", va_arg(list, int));
		if (separator && m < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
