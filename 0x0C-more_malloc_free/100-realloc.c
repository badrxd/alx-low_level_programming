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

	if (new_size == 0 && ptr != NULL)
		return (NULL);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	ptr2 = (malloc(new_size * sizeof(ptr)));

	if (ptr2 == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
		{
			if (ptr == NULL)
				break;
			((char *)ptr2)[i] = ((char *)ptr)[i];
		}
	}
	free(ptr);
	return (ptr2);
}
