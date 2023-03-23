#include "main.h"
/**
 * print_square - print square n time
 * @size: size of square
 */
void print_square(int size)
{
	int i;
	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0; i <= size ; i++)
	{
		_putchar(35);
		_putchar('\n');
	}
	}
}
