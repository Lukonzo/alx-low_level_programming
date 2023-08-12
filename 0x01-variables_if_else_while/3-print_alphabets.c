#include <stdio.h>

/**
 *main: Entry point
 *
 * Task: program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar (C);
		++C;
	}

	putchar('\n');

	return (0);
}
