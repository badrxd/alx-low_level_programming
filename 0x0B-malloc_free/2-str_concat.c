#include "main.h"
#include <stdlib.h>
/**
* str_concat( - fun
* @s1: variable
* @s2: variable
* Return: ptr
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
        {
                j++;
        }
	i = i + j;
	ptr = (char *)malloc(i + 1);

	for (k = 0; k < i; k++)
	{
		if ()
		{
		}
		*(ptr + k) = str[k];
	}
	return (ptr);
}
