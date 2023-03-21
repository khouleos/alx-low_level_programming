#include "main.h"
#include <ctype.h>
/**
 * _islower - lower case check
 * @c: the checked character
 * Return: 1 if lower caseelse 0
 */
int _islower(int c)
{
	if (c >= 98 && c <= 122)
	{
	return (1);
	}
	return (0);
}
