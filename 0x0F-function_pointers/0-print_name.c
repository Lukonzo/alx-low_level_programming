#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - A function that prints a name
 *
 * @name: name
 * @f: function pointer that does not return anything
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
