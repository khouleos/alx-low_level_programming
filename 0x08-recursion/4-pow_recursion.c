#include "main.h"
/**
 * _pow_recursion - fun that returns value of x^y
 * @x: entry point
 * @y: entry point
 * Return: print results
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * (_pow_recursion(x, y - 1)));
}
