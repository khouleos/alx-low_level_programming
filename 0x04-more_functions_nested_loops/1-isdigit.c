#include "main.h"

/**
 * _isdigit - check if the character is digit
 * @c : the checked character
 * Return: return 1 if uppercase else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
