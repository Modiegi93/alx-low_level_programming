#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of a linked list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t xnode;
	const listint_t *link_node = head;

	if (!head)
		exit(98);

	while (link_node)
	{
		printf("[%p] %i\n", (void *)link_node, link_node->n);
		link_node = link_node->next;
		xnode++;
	}
	return (xnode);
}
