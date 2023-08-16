#include "main.h"

/**
 * main - Entry point
 *
 * Task: A program that prints _putchar
 * followed by  a new line.
 *
 * Return: 0
 */

int main(void)
{
	char c[] = "_putchar";
	int i;
	for (i = 0; i <= 8; i++)
	{
		_putchar(c[i]);
		putchar('\n');
		return (0);
	}
