#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: head of a linked list
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *mouse;

	if (!head)
		return (NULL);
	cat = head;
	mouse = head;
	while (mouse->next && mouse->next->next)
	{
		mouse = mouse->next->next;
		cat = cat->next;
		if (mouse == cat)
		{
			cat = head;
			while (cat != mouse)
			{
				cat = cat->next;
				mouse = mouse->next;
			}
			return (mouse);
		}
	}
	return (NULL);
}
