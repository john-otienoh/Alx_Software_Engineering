#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @f: function pointer
 * @name: character array
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
