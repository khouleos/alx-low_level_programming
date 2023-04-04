#include "main.h"
/**
 * _strstr - function finds the substring needle
 * @haystack: entry point
 * @needle: entry point
 * Return: print results
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	for (i = 0; haystack[i] ; i++)
	{
		if (haystack[i] == needle[i])
			return (haystack + i);
	}
	return (0);
}
