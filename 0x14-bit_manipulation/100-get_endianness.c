#include "main.h"
/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
