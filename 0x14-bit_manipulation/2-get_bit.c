#include "main.h"

/**
 * get_bit - Get the bit of a given index.
 * @n: Number to evaluate.
 * @index: Position of bit.
 * Return: Value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
