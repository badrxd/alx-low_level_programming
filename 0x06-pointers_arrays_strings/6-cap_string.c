#include "main.h"

/**
* cheak_Separators - fun
* @c: pointer
*
* Return: value
*/
int cheak_Separators(char c)
{
	int i;
	char b[] = " \n\t,;.!?\"(){}";

	for (i = 0; i < 13; i++)
	{
		if (c == b[i])
			return (1);
	}
	return (0);
}

/**
* cheak_capitalizes - fun
* @c: pointer
*
* Return: c
*/
int cheak_capitalizes(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

/**
* *cap_string - fun
* @a: pointer
*
* Return: a
*/
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i])
	{
		if (i == 0 && cheak_capitalizes(a[i]))
			a[i] = a[i] - 32;
		if (cheak_Separators(a[i]) && cheak_capitalizes(a[i + 1]))
			a[i + 1] = a[i + 1] - 32;
		i++;
	}
	return (a);
}
