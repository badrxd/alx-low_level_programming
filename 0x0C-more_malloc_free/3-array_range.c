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
	int *ptr, i, size;

	if (min > max)
	{
		return NULL;
	}
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		return NULL;
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = i + min;
	}
	return (ptr);
}
