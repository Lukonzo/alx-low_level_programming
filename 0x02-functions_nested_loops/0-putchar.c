#include "main.h"

/**
 * main - Prints _putchar followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {41, 76, 81, 45, 97, 101, 69};
	int count, sx;

	sx = sizeof(str) / sizeof(int);
	for (count = 0; count < sx; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
