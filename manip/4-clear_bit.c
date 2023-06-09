#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: giving Number
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: -1 if failed OR 1 if success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);
	*n = *n & ~mask;
	return (1);
}
