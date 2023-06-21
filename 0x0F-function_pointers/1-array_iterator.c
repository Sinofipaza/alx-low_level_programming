#include "function_pointers.h"

/**
 * array_iterator - function that execute function given as parameter
 * @array: array of parameters to execute
 * @size: size of array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
