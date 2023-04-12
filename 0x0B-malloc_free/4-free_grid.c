#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* free_grid - fun
* @grid: variable
* @height: variable
* Return: arr
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
