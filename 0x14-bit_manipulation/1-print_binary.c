#include "main.h"
#include <stdio.h>
/**
 * print_binary - convert binary to int
 * @n: Entry int
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin = 1 << (sizeof(unsigned long int) * 8 - 1);
	int count = 0;

	while (bin > 0)
	{
		if (n & bin)
		{
			_putchar('1');
			count = 1;
		}
		else if (count)
		_putchar('0');
		bin >>= 1;
	}
	if (!count)
	{
	_putchar('0');
	}
}
