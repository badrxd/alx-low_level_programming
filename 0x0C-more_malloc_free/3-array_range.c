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
		return (NULL);
	}
	ptr = malloc(sizeof(int) * max);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = min; i < max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
