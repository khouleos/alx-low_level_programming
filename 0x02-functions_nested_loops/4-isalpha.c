#include "main.h"
#include <ctype.h>
/**
 * _isalpha - alpha & lower case check
 * @c: the checked character
 * Return: 1 if lower caseelse 0
 */
int _isalpha(int c)
{
	if ((c >= 98 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
