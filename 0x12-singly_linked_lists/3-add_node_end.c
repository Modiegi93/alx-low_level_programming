#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: const double pointer of structure list_t for beginning.
 * @str: const char pointer for data to be added
 *
 * Return: pointer of new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = new;
		new->len = i;
		new->str = strdup(str);
		new->next = NULL;
		return (new);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	return (new);
}
