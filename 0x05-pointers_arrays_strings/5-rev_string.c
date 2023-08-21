#include "main.h"
#include "string.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string
 */

void rev_string(char *s)
{
	int m, len = strlen(s), n = 0;
	char tmp;

	for (m = len - 1; m >= len / 2; m--)
	{
		tmp = s[m];
		s[m] = s[n];
		s[n] = tmp;
		n++;
	}
}
