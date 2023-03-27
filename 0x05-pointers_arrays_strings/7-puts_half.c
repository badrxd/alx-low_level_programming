#include "main.h"
/**
* puts_half - function
*@str: a pointer
*
*Return: no return
*/
void puts_half(char *str)
{
	int i, l, n;

	l = 0;
	for (i = 0; str[i] != '\0'; i++)
		l++;
	if (l % 2 == 1)
		n = ((l + 1) / 2);
	else
		n = (l / 2);
	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
