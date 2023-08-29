#include "main.h"

/**
 * _strpbrk - a function that searches
 * a string for any of a set of bytes.
 *
 * @s: string.
 * @accept: string with bytes.
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept);
{
	int m, n;

	for (m = 0; *s != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
			{
				return (s);
			}
		}
		s++
	}
	return (NULL);
}
