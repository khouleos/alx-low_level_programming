#include "main.h"
/**
 * _strlen_recursion - function calculate length of a string
 * @s: Entry string
 * Return: print results
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}
