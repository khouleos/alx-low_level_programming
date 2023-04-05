#include "main.h"
/**
 * _puts_recursion - print string using recursion
 * @s: input string
 * Return: print results
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	return;
	else
	_putchar(*s);
	(_puts_recursion(s + 1));
}
