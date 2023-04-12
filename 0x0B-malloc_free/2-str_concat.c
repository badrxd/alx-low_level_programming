#include "main.h"
#include <stdlib.h>
/**
* str_concat - fun
* @s1: variable
* @s2: variable
* Return: ptr
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k, m;

	i = 0;
	j = 0;
	k = 0;
	m = 0;
	while (s1[k] && s1)
	{
		k++;
	}
	while (s2[m] && s2)
	{
		m++;
	}
	i = i + j;
	ptr = malloc(sizeof(char) * (k + m + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1)
	{
	for (i = 0; i < k; i++)
	{
		ptr[i] = s1[i];
	}
	}
	if (s2)
	{
	for (; i < k + m; i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	}
	ptr[i] = '\0';
	return (ptr);
}
