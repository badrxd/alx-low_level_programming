#include "search_algos.h"

/**
 * _print - function to print
 * @array: pointer of the array
 * @start: index of the first element
 *
 * Return: no return value
 */
void _print(int *array, int start)
{
	printf("Value checked array[%d] = [%d]\n", start, array[start]);
}

/**
 * jump_search - search algorithm type jump search
 * @array: pointer of the array
 * @size: array size
 * @value: value to search
 *
 * Return: index of value or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int start, end, cast_sz, i;

	cast_sz = (int)size;
	start = 0;
	end = sqrt(size);
	if (array == NULL)
		return (-1);
	_print(array, start);
	while (value > array[end] && start < cast_sz - 1)
	{
		start = end;
		if (end > cast_sz - 1)
			end = cast_sz;
		else
			end = end + sqrt(size);
		_print(array, start);
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);

	for (i = start; i <= end && i < cast_sz; i++)
	{
		_print(array, i);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
