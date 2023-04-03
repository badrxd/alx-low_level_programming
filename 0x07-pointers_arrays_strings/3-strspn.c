#include "main.h"
/**
* _strspn - f
* @s: value
* @accept: value
* Return: s or 0
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s == accept[0])
		{
			i++;
			return (i);
		}
		i++;
		s++;
	}
	return (0);
}
