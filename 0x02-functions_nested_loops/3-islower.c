#include "main.h"
#include <stdio.h>
/**
* 
*
*/
int _islower(int c)
{
	int a ,b;

	a = _putchar(c);
	if (a >= 97 && a <= 122)
	{
		b = 1;
	}
	else
	{
		b = 0
	}
	return (b);
}
