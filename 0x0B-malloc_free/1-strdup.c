#include "main.h"
#include <stdlib.h>
/**
* _strdup - fun
* @str: variable
*
* Return: ptr
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, k;

	if (str == NULL)
		return ('\0');
	while (str[i])
		i++;
	ptr = (char *)malloc(i + 1);
	if (!ptr)
		return ('\0');
	for (k = 0; k < i; k++)
	{
		*(ptr + k) = str[k];
	}
	return (ptr);
}
