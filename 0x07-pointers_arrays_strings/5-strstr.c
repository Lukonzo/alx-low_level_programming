#include "main.h"

/**
 * _strstr - function that locates a substring.
 *
 * @haystack: the string.
 * @needle: the substring.
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *p = needle;

		while (*m == *p && *p != '\0')
		{
			m++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
