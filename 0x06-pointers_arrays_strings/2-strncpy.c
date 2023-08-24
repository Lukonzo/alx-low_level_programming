#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: pointer to the destination.
 * @src: pointer to the source.
 * @n: number of bytes i n @src.
 *
 * Return: destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
