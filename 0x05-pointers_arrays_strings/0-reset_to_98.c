#include "main.h"
/**
 * reset_to_98 - reset pointer
 * @n: pointer
 */
void reset_to_98(int *n)
{
	int **q = &n;
	**q = 98;
}
