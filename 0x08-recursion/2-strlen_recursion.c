#include "main.h"

/**
  * _strlen_recursion - function returns length of string.
  * @s: the string whose length we return.
  * Return: returns the length of a string.
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
