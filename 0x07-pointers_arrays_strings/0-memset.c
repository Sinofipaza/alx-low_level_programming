#include "main.h"

/**
 * _memset - function
 * @s: pointed to be changed
 * @b: value that will replace
 * @n: number of bytes to be changed
 * Return: 0 if successful
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
