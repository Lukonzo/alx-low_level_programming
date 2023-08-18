#include "main.h"

/**
 * _isupper - checks whether a character, c
 * is uppercase.
 *
 * @c: the character to be checked.
 *
 * Return: 1 if the character is uppercase, otherwise 0.
 */

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
