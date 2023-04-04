#include "main.h"
/**
 * _strspn - function returns the length of the initial substring of the string
 * @s: string to be scanned
 * @accept: string  containing characters to match
 * Return: return the number of matched char
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n = 0;

	while(s)
	{
	for (i = 0 ; accept[i] ; i++)
	{
	if (*s == accept[i])
	{
	n++;
	break;
	}
	else if (accept[i + 1] == '\0')
	return (n);

	}
	s++;
	}
	return (n);
}
