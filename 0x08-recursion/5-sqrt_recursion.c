#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - Returns the natural sqaure root
 * @n: number to calculate
 * Return: print results
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
  * _sqrt - Calculates natural square root
  * @n: number to calculate the square root
  * @i: iterate number
  *
  * Return: the natural square root
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
