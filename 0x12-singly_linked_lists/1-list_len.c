#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show number of elements of list
  * @h: linked list
  * Return: number of elements of list
  */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
		;
	return (i);
}
