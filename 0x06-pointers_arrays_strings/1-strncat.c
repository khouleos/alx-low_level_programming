#include "main.h"
#include <string.h>
/**
 * *_strncat - cat function
 * @dest: destination char
 * @src: source char
 * @n: size
 * Return: print cat char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int des_len = 0;

	while (dest[i++])
	{
		des_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[des_len + i] = src[i];
	}
	dest[des_len + i] = '\0';
	return (dest);
}
