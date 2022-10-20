#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: const pointer of a structure list_t for beginning.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		free(temp->str);
		free(temp);
	}
}
