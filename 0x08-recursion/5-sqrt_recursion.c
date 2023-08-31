#include "main.h"

/**
 * sqrt_p - main.
 *
 * @p: number 1.
 * @q: number2.
 *
 * Return: Always 0.
 */

int sqrt_p(int p, int q)
{
	if (q * q == p)
	{
		return (q);
	}
	else if (q * q > p)
	{
		return (-1);
	}
	return (sqrt_p(p, q + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: number input.
 * Return: square root.
 */

int _sqrt_recursion(int n)
{
	return (sqrt_p(n, 0));
}
