#include <stdio.h>

/**
 * main - Entry point
 *
 * Program: Prints all possible combinations of
 * two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m = 0, n;

	while (m <= 99)
	{
		m = n;
		while (n <= 99)
		{
			if (n != m)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);

				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++n;
		}
		++m;
	}
	putchar('\n');
	return (0);
}
