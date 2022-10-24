#include "lists.h"

/**
 * print_listint - print all the elements of listint
 * @h: header pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
