#include <stdio.h>
/**
 * get_endianness - func checks the endianness.
 * Return: ...
 */
int get_endianness(void)
{
	unsigned int e = 0x12345678;
	unsigned char *s = (unsigned char *) &e;

	if (*s == 0x78)
	return (1);
	else
	return (0);
}
