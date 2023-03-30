#include "main.h"
/**
 * string_toupper - function to uppercase a string
 * @str: pointer to target string
 * Return: print the results
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
	str++;
	}
	return *str
}
