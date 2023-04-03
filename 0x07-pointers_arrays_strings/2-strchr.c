#include "main.h"
/**
* _strchr - fun
* @s: array
* @c: value
*
* Return: pointer
*/
char *_strchr(char *s, char c)
{
	int i;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
