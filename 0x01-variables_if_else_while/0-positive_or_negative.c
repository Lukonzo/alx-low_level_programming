#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/** 
 * main - Entry point
 *
 * Task: print n as negative, zero or positive.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<0)
	{
		printf("%d is negative\n", &n);
		else if (n==0)
		{
			printf("%d is zero\n" &n);
			else 
				printf("%d is positive\n");
		}
	}
}
	return (0);
}
