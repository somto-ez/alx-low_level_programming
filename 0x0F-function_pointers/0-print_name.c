#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: names main
 * @f: void function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
