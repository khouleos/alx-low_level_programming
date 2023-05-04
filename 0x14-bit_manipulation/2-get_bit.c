#include "main.h"
/**
 * get_bit - value of a giving position in a number
 * @n: the number
 * @index: position
 * Return: print results if success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = 1ul >> index;

	if (index >= (sizeof(unsigned long int) * 8)
			return (-1);
	return ((n & temp) ? 1 : 0);
}
