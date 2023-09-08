#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings.
 *
 * @s1: string.
 * @s2: string.
 * @n: bytes.
 *
 * Return: Always 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	unsigned int p, q, r;

	if (s1 == NULL)
		p = 0;
	else
	{
		for (p = 0; s1[p]; p++)
			;
	}
	if (s2 == NULL)
		q = 0;
	else
	{
		for (q = 0; s2[q]; q++)
			;
	}
	if (q > n)
		q = n;
	m = malloc(sizeof(char) * (p + q + 1));
	if (m == NULL)
		return (NULL);
	for (r = 0; r < p; r++)
		m[r] = s1[r];
	for (r = 0; r < q; r++)
		m[r + p] = s2[r];
	m[p + r] = '\0';
	return (m);
}
