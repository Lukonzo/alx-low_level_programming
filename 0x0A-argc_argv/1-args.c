#include <stdio.h>

/**
 * main - program that prints the number of
 * arguments passed into it.
 * Followed by a new line
 *
 * @argc: input
 * argv: number
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
