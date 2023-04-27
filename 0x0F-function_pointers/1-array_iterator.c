#include "function_pointers.h"

/**
  * array_iterator - Print an array
  * @array: The array to prints
  * @size: size of array
  * @action: Pointer function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
	for (i = 0; i < size; i++)
		action(array[i]);
	}
}
