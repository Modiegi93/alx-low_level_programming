#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of linked list.
 * @head: head of the pointer to dlistint_t linked list
 * @index: index of the node, starting from 0.
 * Return: if the node does not exist, return NULL
 * or the the node if it exists.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
