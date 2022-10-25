#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of a linked list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodeCount = 0;
	const listint_t *x_node = head;

	if (!head)
		exit(98);

	while (x_node)
	{
		printf("[%p] %d\n", (void *)x_node, x_node->n);
		x_node = x_node->next;
		nodeCount++;
	}
	return (nodeCount);
}
