#include "main.h"
/**
 * _strstr - function finds the substring needle
 * @haystack: entry point
 * @needle: entry point
 * Return: print results
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (0);
}
