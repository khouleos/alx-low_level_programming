#include "main.h"
/**
 * string_toupper - function to uppercase a string
 * @str: pointer to target string
 * Return: print the results
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	i++;
	}
	return (str);
}
