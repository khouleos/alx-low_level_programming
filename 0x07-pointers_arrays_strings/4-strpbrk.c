#include "main.h"
/**
 * _strpbrk - function to search a string
 * @s: string to be searched
 * @accept: string to search for
 * Return: print results
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0 ; accept[j]; j++)
		{
			if (*s == accept[j])
			return (s);
		}
	s++;
	}
	return ('\0');
}
