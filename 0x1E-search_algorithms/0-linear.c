#include "search_algos.h"

/**
 * linear_search - finction for Linear search algorithm
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 *
 * Return: index of value or -1 if value is not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
		return (i);
	}
	return (-1);
}
