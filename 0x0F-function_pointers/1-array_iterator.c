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
	int i;
	if (array && size && action))
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}

}
