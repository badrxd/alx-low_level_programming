#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - fun
* @s1: value
* @s2: value
* @n: value
*
*Return: ptr
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, sum;
	char *ptr;

	sum = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sum + 1);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < sum ; i++)
	{
		ptr[i] = 0;
	}
	ptr[i] = '\0';
	return (ptr);
}
