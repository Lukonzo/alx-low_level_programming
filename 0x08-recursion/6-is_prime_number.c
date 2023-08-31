#include "main.h"

/**
 * prime_p - main
 *
 * @p: input
 * @r: input
 * Return: Always 0.
 */

int prime_p(int p, int q)
{
	if (p <= 1 || (p != q && p % q == 0))
	{
		return (0);
	}
	else if (p == q)
	{
		return (1);
	}
	return (prime_p(p, q + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0.
 *
 * @n: input integer.
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	return (prime_p(n, 2));
}
