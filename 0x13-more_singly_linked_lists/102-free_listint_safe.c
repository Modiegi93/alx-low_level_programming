#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: head to linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_i, node_j;
	listint_t *tempi, *tempj, *head;

	if (*h == NULL || h == NULL)
		return (0);

	tempi = *h;
	head = *h;
	node_i = 0;

	while (head != NULL)
	{
		tempj = *h;
		for (node_j = 0; node_j < node_i; node_j++)
		{
			if (tempj == tempi)
			{
				*h = NULL;
				return (node_i);
			}

			tempj = tempj->next;
		}

		tempi = head->next;
		free(head);
		head = tempi;
		node_i++;
	}
	*h = NULL;
	return (node_i);
}
