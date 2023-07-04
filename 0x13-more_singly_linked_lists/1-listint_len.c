#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: pointer to first element
 * Return: elements number
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; h = (*h).next, i++)
		;

	return (i);
}
