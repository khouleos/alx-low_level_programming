#include "main.h"
/**
 * _strncpy - copy two string
 * @dest: the destination string to be appended upon
 * @src: the source string to be appended to dest
 * @n: the number of bytes from src to be appended to des
 * Return: a pointer to the results
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\n' ; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\n';
	return (dest);
}
