#include "main.h"

/**
 * print_sign - Prints the sign
 * @n: the numver to be checked
 * Return: 1 if positive number ,-1 for negative ones or zero for else
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
