#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int **q;
	**q = &a;
	*a = *b;
	*b = **q;
}
