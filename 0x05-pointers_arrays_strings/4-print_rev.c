#include "main.h"
#include <string.h>
/**
 * print_rev - print string in reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int i = 0;

	while (i[s] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(i[s]);
	}
	_putchar('\n');
}
