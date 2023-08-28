#include "main.h"

/**
 * _strchr - A function that locates a character string.
 *
 * @s: pointer to the string.
 * @c: character to be located.
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
		{
			return (&s[m]);
		}
	}
	return (0);
}
