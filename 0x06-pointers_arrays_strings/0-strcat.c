#include "main.h"
/**
* *_strcat - fun
* @dest: pointer
* @src: pointer
*
* Return: return dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j, l, k;

	i = 0;
	l = 0;
	k = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		l++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		k++;
		i++;
	}

	for (i = l; i < (l + k); i++)
	{
		dest[i] = src[j];
		j++;
	}

	dest[l + k] = '\0';
	return (dest);
}
