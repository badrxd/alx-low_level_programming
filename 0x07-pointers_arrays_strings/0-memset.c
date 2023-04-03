#include "main.h"
/**
* _memset - fun
* @s: array
* @b: value
* @n: value of n
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
