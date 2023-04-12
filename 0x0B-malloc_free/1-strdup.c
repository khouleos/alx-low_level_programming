#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 * Return: print results
 */
char *_strdup(char *str)
{
	char *p;
	int i = 1, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	p = malloc((sizeof(char) * i) + 1);
	if (p == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[j] = '\0';
	return (p);
}
