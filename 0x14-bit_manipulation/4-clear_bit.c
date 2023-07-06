#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0.
 * @n: Pointer to number to change.
 * @index: Index of bit to clear.
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number = *n;

	if (index > sizeof(8) * 8)
		return (-1);

	number &= ~(1 << index);
	*n = number;
	return (1);
}
