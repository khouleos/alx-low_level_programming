#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that create an array
 * @size: size of thr array
 * @c: Entry point
 * Return: print results
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(c) * size);
	if (p == 0)
		return (NULL);
	return (p);
}
