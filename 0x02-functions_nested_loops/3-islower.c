#include "main.h"
#include <stdio.h>
/**
* _islower - fun
* @c: variable
*
* Return: 0 or 1
*/
int _islower(int c)
{
	int a;

	a = putchar(c);
	if (a >= 97 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
