#include "function_pointers.h"
/**
* int_index - function
* @array: array
* @size: size of array
* @cmp: pointer to function
*
* Return: return index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	}
	return (-1);
}
