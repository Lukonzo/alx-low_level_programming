#include "main.h"

/**
 * _islower - check whether a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lower,
 * otherwise 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
