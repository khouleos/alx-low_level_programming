#include "main.h"
/**
 * _memset - fill memory with bytes
 * @s: memory address where to set new values
 * @b: new value to set
 * @n: number of bytes
 * Return: print results
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
		s[i] = b;
	return (s);
}
