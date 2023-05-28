#include <stdio.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: giving Number
 * @m: giving Number
 * Return: ...
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x != 0)
	{
	if ((x & 1) == 1)
	count++;
	x >>= 1;
	}
	return (count);
}
