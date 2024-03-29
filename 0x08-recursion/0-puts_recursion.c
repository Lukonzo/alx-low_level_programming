#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * followed by a new line.
 *
 * @s: string to print.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
