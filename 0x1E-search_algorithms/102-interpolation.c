#include "search_algos.h"

/**
 * _search - helper function
 * @array: pointer
 * @low: the start of sub array
 * @high: the end of sub array
 * @value: the value
 *
 * Return: the index of the value or -1 if the value is not found
 */

int _search(int *array, int low, int high, int value)
{
	size_t pos;

	pos = low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));

	if ((int)pos > high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	if (value == array[low])
	{
		return (low);
	}

	if (value > array[low])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		return (_search(array, pos, high, value));
	}

	return (-1);
}

/**
 * interpolation_search - search function type interpolation search
 * @array: pointer
 * @size: the size of the array
 * @value: the value
 *
 * Return: the index of the value or -1 if the value is not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (_search(array, 0, size - 1, value));
}
