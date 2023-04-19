#include "function_pointers.h"
/**
 * print_name - print the name function
 * @name: name to print
 * @f: pointer to func
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
