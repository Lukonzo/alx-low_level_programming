#include <stdlib.h>
#include<stdio.h>

/**
 * main -A program that prints the
 * opcodes of its own main function.
 *
 * @argc: argument
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m, bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (m = 0; m < bytes; m++)
	{
		if (m == bytes - 1)
		{
			printf("%02hhx\n", arr[m]);
			break;
		}
		printf("%02hhx ", arr[m]);
	}
	return (0);
}
