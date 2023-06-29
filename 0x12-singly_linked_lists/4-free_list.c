#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees list
 * @head: list_t to be freed
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold->str);
		free(hold);
	}
}
