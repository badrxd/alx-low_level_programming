#include "main.h"
#include <string.h>
/**
* puts2 - function
*@str: a pointer
*
*Return: no return
*/
void puts2(char *str)
{
	int i, l;

	l = strlen(str);
	for (i = 0; i < l; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
