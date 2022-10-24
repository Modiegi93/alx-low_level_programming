#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of listint_t list
 * @head: header pointer
 * @n: integer data type
 *
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	next->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
