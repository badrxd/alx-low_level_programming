#include "main.h"
/**
* *_strncat - fun
* @dest: pointer
* @src: pointer
* @n: variable
*
* Return: return dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, l;

	i = 0;
	l = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		l++;
		i++;
	}
	i = 0;

	for (i = l; i < (l + n); i++)
	{
		if (*(src + j) == '\0')
			break;
		dest[i] = *(src + j);
		j++;
	}
	return (dest);
}
