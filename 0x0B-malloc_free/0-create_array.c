#include "main.h"
#include <stdlib.h>
/**
* create_array - fun
* @size: variable
* @c: variable
* Return: non
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return ('\0');
	ptr = (char *)malloc(size * 1);
	if (!ptr)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
