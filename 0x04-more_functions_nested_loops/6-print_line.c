#include "main.h"
/**
 * print_line - print n line
 * @n: number of line
 *
 */

void print_line(int n)
{
	int i;

	for (i = 1 ; i <= n ; i++)
		_putchar('_');
	_putchar('\n');
}
