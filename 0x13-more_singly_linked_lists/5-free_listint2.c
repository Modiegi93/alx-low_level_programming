#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * set head to NULL
 * @head: header pointer
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *pre_node;
	listint_t *next_node;

	if (!head)
		return;

	pre_node = *head;
	next_node = (*head)->next;

	while (next_node)
	{
		free(pre_node);
		pre_node = next_node;
		next_node = next_node->next;
	}
	free(pre_node);
	*head = NULL;
}
