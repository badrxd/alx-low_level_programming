#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers containing a range of values
 * @min: the minimum value of the range
 * @max: the maximum value of the range
 *
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = i + min;
	}

	return (ptr);
}
