#include <stdio.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: giving Number
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: -1 if failed OR 1 if success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	return (-1);
	*n = *n | temp;
	return (1);
}
