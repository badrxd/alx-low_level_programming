#include "main.h"
/**
* _strcmp - fun
* @s1: pointer
* @s2: pointer
* Return: return value
*/
int _strcmp(char *s1, char *s2)
{
	int i, l, k;

	i = 0;
	l = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		l++;
		i++;
	}

	while (s1[i] != '\0')
	{
		k++;
		i++;
	}
	return (l - k);
}
