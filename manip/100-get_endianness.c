#include "main.h"
/**
 * get_endianness -  endianness check
 *
 * Return: 0 if big endian, 1 if litle endian
 */
int get_endianness(void)
{
	int i = 1;
	char *s = (char *)&i;

	if (*s == 1)
		return (1);

	return (0);
}
