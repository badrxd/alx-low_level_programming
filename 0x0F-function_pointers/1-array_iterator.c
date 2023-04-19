#include "function_pointers.h"
/**
* array_iterator - function
* @array: an array of numbers type int
* @size: size of the array
* @action: pointer to function
*
* Return: no return
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *i;

	i = array + size - 1;
	if (array && size && action)
	{
		while (array <= i)
		{
			action(*array++);
		}
	}

}
