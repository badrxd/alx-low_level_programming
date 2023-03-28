#include "main.h"
#include <stdio.h>
/**
* *_strcpy - function
* @dest: a pointer
* @src: a pointer
*
* Return: return value
*/
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;
	for (i = 0; src[i] != '\0'; i++)
		l++;
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
