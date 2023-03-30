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
	int des_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[des_len + i] = src[i];
	dest[des_len + i] = '\0';
}
