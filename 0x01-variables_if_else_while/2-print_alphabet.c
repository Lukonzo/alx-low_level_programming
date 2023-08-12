#include <stdio.h>

/**
 * main - Entry point
 *
 * Task: a program that prints the alphabet in lowercase
 * followed by a new line, using putchar.
 *
 * Return: Always o (Success)
 */

int main()
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');

	return (0);
}
