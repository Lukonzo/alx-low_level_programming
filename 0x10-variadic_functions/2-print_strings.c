#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 * followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list list;
	char *s;

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		s = va_arg(list, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (m < n - 1)
			if (separator)
				printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
