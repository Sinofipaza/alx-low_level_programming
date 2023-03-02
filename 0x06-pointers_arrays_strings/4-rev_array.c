#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: number of elements in the array
 * @a: int array to reverse
 * Return: concenated string
 */

void reverse_array(int *a, int n)
{
	int *begin = a;
	int *end;
	int hold = 0;

	end = a + n - 1;
	for (; begin < end; begin++, end--)
	{
		hold = *end;
		*end = *begin;
		*begin = hold;
	}
}
