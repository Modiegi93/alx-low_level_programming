#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: const double pointer of structure list_t for beginning.
 * @str: const char pointer for data to be added
 *
 * Return: pointer of the new element, NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
		new->next = *head;
	}

	if (new == NULL)
		return (NULL);

	new->next = *head;
	*head = new;

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;

	return (new);
}
