#include "lists.h"

/**
 * free_listint2 - Frees a list of ints.
 * @head: Address of pointer to first node.
 * Return: ...
 */

void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (head && *head)
	{
		hold = *head;
		*head = (**head).next;
		free(hold);
	}
}
