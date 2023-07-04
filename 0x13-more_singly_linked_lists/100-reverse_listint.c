#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: double pointer to start of linked list
 * Return: pointer to first node of the reveresed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head)
	{
		next = (**head).next;
		(**head).next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
