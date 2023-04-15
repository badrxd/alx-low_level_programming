#include "main.h"
#include <stdlib.h>
/**
* _realloc - fun
* @ptr : value
* @old_size: value
* @new_size: value
*
* Return: ptr2
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size > old_size)
	{
		ptr2 = (malloc(new_size));
		if (ptr2 == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < old_size; i++)
		{
			((char *)ptr2)[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (ptr2);
}
