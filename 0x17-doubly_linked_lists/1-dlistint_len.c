#include "lists.h"

/**
 * dlistint_len - count all elements of a dlistint_t list
 * @h: doubly linked list node
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	for (; h; h = h->next, size++)
		;
	return (size);
}
