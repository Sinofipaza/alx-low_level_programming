#include "function_pointers.h"

/**
  * print_name - Prints name
  * @name: name to print
  * @f: Pointer to function
  * Return: name
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
