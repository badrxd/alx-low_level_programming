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
	unsigned int i = 0, j = 0, k = 0, m = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] && s1)
	{
		k++;
	}
	while (s2[m] && s2)
	{
		m++;
	}

	ptr = malloc(sizeof(char) * (k + m + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1)
	{
	while (i < k)
	{
		ptr[i] = s1[i];
		i++;
	}
	}
	if (s2)
	{
	while (i < (k + m))
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	}
	ptr[i] = '\0';
	return (ptr);
}
