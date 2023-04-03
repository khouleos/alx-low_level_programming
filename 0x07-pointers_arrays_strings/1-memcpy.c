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

	for (i = 0 ; i < n ; i++)
	dest[i] = src[i];
	return (dest);
}
