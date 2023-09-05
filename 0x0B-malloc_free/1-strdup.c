#include "main.h"

/**
 * _strdup - A function that returns a pointer to a
 * newly allocated space in memory which contains a
 * copy of the string given as a parameter.
 *
 * @str: string input to duplicate.
 *
 * Return: NULL if str = NULL.
 */

char *_strdup(char *str)
{
	char *m;
	unsigned int p = 0, q = 0;

	if (str == NULL)
		return (NULL);
	while (str[q])
		q++;
	m = malloc(sizeof(char) * (q + 1));

	if (m == NULL)
		return (NULL);
	while ((m[p]) != '\0')
		p++;
	return (m);
}
