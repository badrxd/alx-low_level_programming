#include "main.h"
/**
* print_sign - fun
* @n: variable
*
* Return: 0 or 1
*/
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		_putchar('+');
		a = 1;
	}
	else if (n ==  0)
	{
		_putchar('0');
		a = 0;
	}
	else
	{
		_putchar('-');
		a = -1;
	}
	return (a);
}
