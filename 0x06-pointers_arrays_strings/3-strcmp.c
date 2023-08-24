#include "main.h"

/**
 * _strcmp - A function  that compares two strings.
 *
 * @s1: string 1 input.
 * @s2: string 2.
 *
 * Return: 0 if s1 and s2 are equal.
 */

int _strcmp(char *s1, char *s2)
{
	int m, n;

	while (s1[m] != '\0' && n == 0)
	{
		n = s1[m] - s2[m];
		m++;
	}
	return (n);
}
