#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1.
 * @n: Pointer to number to change.
 * @index: Index of bit to set to 1.
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}
