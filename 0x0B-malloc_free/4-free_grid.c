#include "main.h"
#include <stdlib.h>

/**
  * free_grid - free alloc memo
  * @grid: target alloc
  * @height: table height
  *
  * Return: ...
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
