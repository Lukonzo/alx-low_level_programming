#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 *
 * @s: string to return.
 * Return: Length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s +1);
	}
}
