#include <stdio.h>
#include <stdlib.h>

/**
 * main - A  program that multiplies two numbers.
 * print the result of the multiplication
 * followed by a new line
 *
 * @argc: argument
 * @argv: argument array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mainm, n, mn;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[1]);
	mn = m * n;

	printf("%d\n", mn);
	return (0);
}

