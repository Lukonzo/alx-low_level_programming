#include "main.h"

/**
 * _atoi - A function that convert a string to an integer.
 * @s: the string.
 *
 * Return: Integer value of the string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int m = 0;

	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			m = (m * 10) + (*s - '0');
		}
		else if (m > 0)
		{
			break;
		}
	} while
		(*s++);

	return (m * sign);
}

