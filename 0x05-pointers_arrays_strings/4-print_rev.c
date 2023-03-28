#include "main.h"
/**
* print_rev - function
*@s: a pointer
*
*Return: no return
*/
void print_rev(char *s)
{
	int i, l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
		l++;
	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
