#include "main.h"
/**
 * binary_to_uint - convert binary to int
 * @b: pointer to the string
 * Return: print results 
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	char s;

	if (b == NULL) {
	return (0);
	}
	for (i = 0; (s = b[i]) != '\0'; i++)
	{
	if (s != '0' && s != '1')
	{
	return (0);
	}
	n = n * 2 + (s - '0');
	}
	
	return (n);
}
