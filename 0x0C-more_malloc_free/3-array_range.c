#include "main.h"
#include <stdlib.h>
/**
* array_range - fun
* @min: value
* @max: value
* Return: ptr
*/
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		exit (0);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
