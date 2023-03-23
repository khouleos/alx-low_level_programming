#include "main.h"
/**
 * print_diagonal - print diagonal n times
 * @n: number of diagonal should be printed
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
	{
		_putchar(' ');
		if (n < 0)
		{
			_putchar('\n');
			break;
		}
	}
	_putchar('\\');
	_putchar('\n');
