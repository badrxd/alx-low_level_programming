#include "main.h"
#include <string.h>
/**
* puts_half - function
*@str: a pointer
*
*Return: no return
*/
void puts_half(char *str)
{
	int i, l, n = 0;

	l = strlen(str);
	if (l % 2 == 1)
		n = (l - 1) / 2;
	else
		n = l / 2;
	for (i = (l / 2); i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
