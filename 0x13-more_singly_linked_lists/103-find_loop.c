#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: ...
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1, *p2;

	p1 = p2 = head;
	while (p1 && p2 && p2->next)
	{
		p1 = p1->next;
		p2 = p2->next->next;
		if (p1 == p2)
		{
			p1 = head;
			break;
		}
	}
	if (!p1 || !p2 || !p2->next)
		return (NULL);
	while (p1 != p2)
	{
		p1 = p1->next;
		p2 = p2->next;
	}
	return (p2);
}
