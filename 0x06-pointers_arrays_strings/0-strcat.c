#include "main.h"
#include <string.h>

/**
 * _strcat - A function that concatenates
 * two strings
 *
 * @dest: destination.
 *
 * @src: source string.
 *
 * Return: pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int m, n;

	m = 0;

	while (dest[m])
		m + = 1;
	for (n = 0; src[n]; n++)
		dest[m++] = src[n];

	return (dest);
}
