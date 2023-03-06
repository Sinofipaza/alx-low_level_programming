#include "main.h"

/**
 * _memset- the memset function
 * @s: the start point of string
 * @b: the value that will replace
 * @n: the number of bytes that will change
 * Return: the changed pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
