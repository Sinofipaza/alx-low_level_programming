#include "lists.h"

/**
  * get_dnodeint_at_index - get node at given index from doubly linked list
  * @head: start of doubly linked list
  * @index: index to return value
  * Return: return nth node at given index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++, head = head->next)
		if (i == index)
			return (head);
	return (NULL);
}
