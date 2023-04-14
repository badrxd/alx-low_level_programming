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
	int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
		return (NULL);

	if (new_size > old_size || ptr == NULL)
		ptr2 = malloc(new_size);

	for (i = 0 ; i < old_size ; i++)
	{
		if (ptr == NULL)
			return (ptr2);
		*((char *)ptr2 + i) = *((char *)ptr + i);
	}
	return (ptr2);
}
