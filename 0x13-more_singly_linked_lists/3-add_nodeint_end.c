#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to end
 * @head: pointer to start of linked list
 * @n: value to add to node
 * Return: the address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;
	(*new).next = NULL;

	if (head && !*head)
	{
		*head = new;
		return (new);
	}

	for (last = *head; (*last).next; last = (*last).next)
		;

	(*last).next = new;

	return (new);
}
