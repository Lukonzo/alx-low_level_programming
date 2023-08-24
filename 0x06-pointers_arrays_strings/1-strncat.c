#include "main.h"

/**
 * _strncat - a function that concatenates
 * two strings
 *
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: src bytes
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int p, r;

	p = 0;

	while (dest[m])
		m++;
	for (r = 0; r < n && src[r] != '\0'; r++)
		dest[p + 1] = '\0';

	return (dest);
}
