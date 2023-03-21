#include "main.h"

/**
 * print_sign - Prints the sign of a numver
 * @n: the checked number
 * Reutrn: 1 if positive -1 if negative else 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
