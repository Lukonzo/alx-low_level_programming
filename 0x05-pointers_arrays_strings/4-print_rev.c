#include "main.h"
#include "string.h"

/**
 * print_rev -  prints a string, in reverse, followed by a new line.
 *
 * @s: String.
 */

void print_rev(char *s)
{
	int m;

	for (m = strlen(s) - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
