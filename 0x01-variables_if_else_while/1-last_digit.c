#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print the last digit of the number stored in the variable n
 * Checks whether it is  greater than 5, 0 or not less than 6.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last_digit);
	}

	return (0);
}
