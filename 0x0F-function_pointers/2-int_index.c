#include "function_pointers.h"
/**
 * int_index - function that search for int
 * @array: array to print
 * @size: size of array
 * @cmp: pointer function
 * Return: print results or -1 if nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}

	return (-1);
}
