#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * add_node_end -  adds new node at the end of list_t list
 * @head: pointer to list
 * @str: string to put in new node
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_l;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_l = malloc(sizeof(list_t));
	if (!new_l)
		return (NULL);

	new_l->str = strdup(str);
	new_l->len = len;
	new_l->next = NULL;

	if (*head == NULL)
	{
		*head = new_l;
		return (new_l);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_l;

	return (new_l);
}
