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
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;
	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (i = src_len ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
