#include "main.h"
#include <string.h>
/**
* print_rev - function
*@s: a pointer
*
*Return: no return
*/
void print_rev(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = (l - 1); i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
