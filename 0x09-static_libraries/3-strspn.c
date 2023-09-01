#include "main.h"

/**
 * _strcpy -A function that Copy paste string
 * @dest: the destination
 * @src: the source
 *
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int m = 0;
	while (*(src + m) != '\0')
	{
		*(dest + m) = *(src + m);
		m++;
	}
	*(dest + m) = '\0';
	return (dest);
}
