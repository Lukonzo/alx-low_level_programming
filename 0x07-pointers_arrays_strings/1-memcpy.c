#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 *
 * @src: memory source.
 * @dest: memory copied to.
 *
 * @n: number of bytes.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i, n; i++)
		dest[i] = src[i];

	return (dest);
}
