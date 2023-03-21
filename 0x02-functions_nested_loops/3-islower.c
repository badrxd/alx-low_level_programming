#include "main.h"
/**
* _islower - fun
* @c: variable
*
* Return: 0 or 1
*/
int _islower(int c)
{
	int a, b;

	a = _putchar(c);
	if (a >= 97 && a <= 122)
	{
		b = 1;
	}
	else
	{
		b = 0;
	}
	return (b);
}
