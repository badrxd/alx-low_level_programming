#include "search_algos.h"

/**
 * print_arr- finction for printing the array
 * @array: pointer to array
 * @left: beginning of array
 * @right: last element of array
 *
 * Return: no
 */

void print_arr(int *array, int left, int right)
{
	int i;

	printf("Searching in array:");
	for (i = left; i <= right; i++)
	{
		if (i < right)
			printf(" %d,", array[i]);
		else
			printf(" %d\n", array[i]);
	}
}

/**
 * search- searches for a value in a sorted in array
 * @array: pointer to array
 * @left: beginning of array
 * @right: last element of array
 * @value: value to search
 *
 * Return: index of the element, or -1 if not found
 */
int search(int *array, int left, int right, int value)
{
	int mdl;

	mdl = left + (right - left) / 2;
	if (left > right)
		return (-1);
	print_arr(array, left, right);
	if (array[mdl] == value)
		return (mdl);
	else if (array[mdl] > value)
		return (search(array, left, mdl - 1, value));
	else
		return (search(array, mdl + 1, right, value));
}

/**
 * exponential_search - search function
 * @size: the size of the array
 * @value: the value
 * @array: the array
 *
 * Return: the index of the value or -1 if the value is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left, right;

	left = 0, right = 1;

	if (!array || size == 0 || value < array[0])
		return (-1);

	while (value > array[right])
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right = right * 2;
		if (right > size - 1)
		{
			right = size - 1;
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	return (search(array, left, right, value));
}
