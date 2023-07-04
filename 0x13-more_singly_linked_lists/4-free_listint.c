#include "lists.h"

/**
 * free_listint - Frees list
 * @head: pointer to head list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head)
	{
		hold  = head;
		head = head->next;
		free(hold);
	}

	free(head);
}
