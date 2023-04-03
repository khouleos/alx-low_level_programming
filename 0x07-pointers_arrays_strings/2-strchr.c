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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	return ('\0');
}
