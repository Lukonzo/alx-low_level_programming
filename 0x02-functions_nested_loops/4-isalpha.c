#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 *
 * @a: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar("\n");
}
