#include "main.h"

/**
 * _memcpy - the memset function
 * @dest: starting point of string that change
 * @src: value to replace
 * @n: number of bytes to change
 * Return: the pointer changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
