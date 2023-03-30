#include "main.h"
/**
 * _strcmp - campre two string
 * @s1: first string or character
 * @s2: second string or character
 * Return: print results of strcamp
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else if (*s1 < *s2)
		return (*s1 - *s2);
	else
		return (*s1 - *s2);
}
