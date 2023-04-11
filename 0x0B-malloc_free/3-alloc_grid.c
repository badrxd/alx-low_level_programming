#include <stdlib.h>
#include <stdio.h>
/**
* alloc_grid - fun
* @width: variable
* @height: variable
* Return: arr
*/
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 ||  height <= 0)
		return ('\0');
	arr = (int**)malloc(width * sizeof(int*));
	for (i = 0; i < width; i++)
	{
		arr[i] = (int*)malloc(height * sizeof(int));
	}
	if (arr == NULL)
		return ('\0');
	for (i = 0; i < width  ; i++)
	{
		for (j = 0; j < height ; j++)
		{
			 arr[i][j] = 0;
		}
	}
	return (arr);
}
