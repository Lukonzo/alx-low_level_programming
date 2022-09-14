#include "unistd.h"
/**
 * _putchar - writes c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1
 * on error, -1 is returnedand errno is set 
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
