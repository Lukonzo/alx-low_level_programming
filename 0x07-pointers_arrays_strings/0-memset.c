#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte.
 *
 * @s: Pointer to the memory to be filled.
 * @b: the value
 * @n: bytes of memory area.
 * Return: array of new value for n bytes.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
