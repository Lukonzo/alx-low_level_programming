#include "main.h"
#include "string.h"

/**
 * puts_half -  prints half of a string, followed by a new line.
 *
 * @str: the string.
 */

void puts_half(char *str)
{
	int m, len = strlen(str);

	if (len % 2 != 0)
	{
		len = len / 2 + 1;
	}
	else
	{
		len /= 2;
	}
	for (m = len; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
