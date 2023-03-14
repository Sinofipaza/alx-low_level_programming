#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with specific char
 * @size: size of array
 * @c: char
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
