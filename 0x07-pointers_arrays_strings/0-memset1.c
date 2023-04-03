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
	int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
