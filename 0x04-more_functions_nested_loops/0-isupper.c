#include "main.h"

/**
 * _isupper - Checks for upper case character.
 *
 * @c: input character.
 *
 * Return: 1 for upper case or 0 otherwise.
 */
int _isupper(int c)
{
	if(c => 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
