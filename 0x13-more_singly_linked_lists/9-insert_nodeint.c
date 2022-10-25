#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head of linked list
 * @idx: index of the list where the new node should be added
 * @n: data of the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *x_node = *head;
	unsigned int index;
	unsigned int cont = 0;

	/* create node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	/* search of position to insert */
	index = idx - 1;
	while (x_node && cont != index)
	{
		cont++;
		x_node = x_node->next;
	}

	/* general case */
	if (cont == index && x_node)
	{
		new_node->next = x_node->next;
		x_node->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
