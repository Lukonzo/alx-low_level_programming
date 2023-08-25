#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase.
 *
 * @s: pointer to a character.
 * Return: s
 */

char *string_toupper(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		if (s[m] >= 'a' && s[m] <= 'z')
			s[m] = s[m] - 32;
		m++;
	}
	return (s);
}
