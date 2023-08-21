#include "main.h"

/**
 * _strlen - a function that returns length of a string.
 *
 * @s: string.
 *
 * Return: string lenght.
 */

int _strlen(char *s)
{
	int m;

	for (m = 0; s[m] != '\0'; m++)
		;
	return (m);
}
