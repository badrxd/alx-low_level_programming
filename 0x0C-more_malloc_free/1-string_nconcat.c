#include "main.h"
#include <stdlib.h>
/**
* calc_len - fun
* @st: value
* Return: i
*/
unsigned int calc_len(char *st)
{
	unsigned int i;

	i = 0;
	while (st[i])
	{
		i++;
	}
	return (i);
}

/**
* string_nconcat - fun
* @s1: value
* @s2: value
* @n: value
*
*Return: ptr
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= calc_len(s2))
		len1 = calc_len(s1) + calc_len(s2);
	else
		len1 = calc_len(s1) + n;
	ptr = malloc(len1 + 1);
	if (!ptr)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0 ; i < len1 ;)
	{
		while (s1[j] != '\0')
		{
			ptr[i] = s1[j];
			j++;
			i++;
			continue;
		}
		ptr[i] = s2[i - j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
