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
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
