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
	unsigned int l;

	i = 0;
	l = 0;
	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[0])
			{
				return (l + 1);
			}
		}
		l++;
		s++;
	}
	return (0);
}
