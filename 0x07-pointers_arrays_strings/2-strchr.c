#include "main.h"
/**
 * _strchr - function to search
 * @s: string
 * @c: searched character
 * Return: print results if found or print null if not
 *
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (0);
}
