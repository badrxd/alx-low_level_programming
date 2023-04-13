#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - fun
* @b: value
*
* Return: ptr
*/
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return NULL;
	ptr = malloc(sizeof *ptr * max + 1);
	if (!ptr)
	{
		free(ptr);
		return NULL;
	}
	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
