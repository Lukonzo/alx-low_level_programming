#include "main.h"

/**
 * _isalpha - checks for an alphabetic character.
 *
 * @c: character to be checked.
 *
 * Return: 1 when c is a letter or otherwise 0
 */
int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
