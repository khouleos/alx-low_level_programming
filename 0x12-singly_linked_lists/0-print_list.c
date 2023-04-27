#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_list - prints the string
 * @h: linked list
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;
	while(h != NULL)
	{
		if(h->str = NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h=h->next;
		i++;
	}
	return(i);
}

