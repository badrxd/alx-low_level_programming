#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - fun
* @b: value
*
* Return: ptr
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
