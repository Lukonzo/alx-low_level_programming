#include "main.h"

/**
 * _strlen - returns length of a string.
 *
 * @s: string.
 *
 * return: string lenght.
 */

int _strlen(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
		;
	return (m);
}
