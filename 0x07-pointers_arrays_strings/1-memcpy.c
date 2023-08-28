#include "main.h"

/**
 * _memcpy - A function that copies memory area.
 *
 * @dest: memory copied to.
 * @src: memory source.
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
