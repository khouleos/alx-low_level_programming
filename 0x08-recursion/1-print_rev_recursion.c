#include "main.h"
/**
 * _print_rev_recursion - print string in reverse using recursion
 * @s: input string
 * Return: print results
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_puts_recursion(s + 1);
	_putchar(*s);
	}
	else
	_putchar('\n');
}
