#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: vriable to be swapped first
 * @b: variable to be swapped after
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
