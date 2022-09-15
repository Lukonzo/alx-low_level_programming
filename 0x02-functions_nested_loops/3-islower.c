#include "main.h"

/**
 * _islower - Checks for a lower case character
 *
 *@r: The character in ASCII code
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int r)
{
	if (r >= 97 && r <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
