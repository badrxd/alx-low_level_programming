#include "search_algos.h"

/**
 * print_arr - finction for printing the array
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
 * search - searches for a value in a sorted in array
 * @array: pointer to array
 * @left: beginning of array
 * @right: last element of array
 * @value: value to search
 *
 * Return: index of the element, or -1 if not found
 */
int search(int *array, int left, int right, int value)
{
	int mdl, i;

	mdl = left + (right - left) / 2;
	if (left > right)
		return (-1);
	print_arr(array, left, right);
	if (array[mdl] == value)
	{
		for (i = mdl; i > 0; i--)
		{
			if (array[i] != value)
			{
				return (i + 1);
			}
		}
		return (mdl);
	}
	else if (array[mdl] > value)
	{
		return (search(array, left, mdl - 1, value));
	}
	else
	{
		return (search(array, mdl + 1, right, value));
	}
}

/**
 * advanced_binary - main function to searches for a value in a sorted in array
 * @array: pointer to array
 * @size: size of array
 * @value: value to search
 *
 * Return: index of the element, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (search(array, 0, (int)size - 1, value));
}
