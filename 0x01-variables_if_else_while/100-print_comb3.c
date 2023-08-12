#include<stdio.h>

/**
 * main - Entry point
 *
 * Task: A program that prints all possible
 * different combinations of two digits.
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int m, n;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (m != n && m < n)
			{
				putchar(m);
				putchar(n);
				
				if (m != '8' || n != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
