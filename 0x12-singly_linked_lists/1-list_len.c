#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Prints all number of elements of a list
  * @h: A linked list
  *
  * Return: The number of nodes
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	i++;
	h = h->next;
	}
	return (i);
}
