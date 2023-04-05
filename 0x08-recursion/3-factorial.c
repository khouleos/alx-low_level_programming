#include "main.h"
/**
 * factorial - factorial of a given num
 * @n: Entry point
 * Return: print results
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
