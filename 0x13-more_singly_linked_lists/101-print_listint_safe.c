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

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodeCount += 1;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("[%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (nodeCount);
}
