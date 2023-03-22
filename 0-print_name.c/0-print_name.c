#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * @f: pointer to a function
 * Return: Nothing.
 */

void print_name_as_is(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
