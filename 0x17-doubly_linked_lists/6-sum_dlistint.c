#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the
 * data (n) of a dlistint_t linked list.
 * @head: head of the pointer to the linked list
 *
 * Return: the sum of a linked list
 * or if the list is empty, 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
