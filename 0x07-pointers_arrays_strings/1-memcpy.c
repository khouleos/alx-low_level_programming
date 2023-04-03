#include "main.h"
/**
 * _memcpy - function to copy address from src to dest
 * @dest: destination adress
 * @src: source address
 * @n: number of bytes to be copied
 * Return: print results
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (dest == 0)
		return (0);
	for (i = 0 ; i < n - 1 ; i++)
	dest[i] = src[i];
	dest[i] = '\n';
	return (dest);
}
