#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t
 * @head: the head of the list
 *
 * Return: NULL if fail
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->p;
		free(head);
		head = p;
	}
}
