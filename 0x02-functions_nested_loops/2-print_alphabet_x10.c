#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 */

void print_alphabet_x10(void)
{
	char m, n;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
