#include "lists.h"

/**
 * print_listint - print elements of linked list
 * @h: pointer to first element
 * Return: elements number
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; h = (*h).next, i++)
		printf("%d\n", (*h).n);

	return (i);
}
