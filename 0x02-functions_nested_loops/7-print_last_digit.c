#include "main.h"
/**
* print_last_digit - f
* @c: value
* Return: return c
*/
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = c * (-1);
	}
	c = c % 10;
	_putchar(c);
	return (c);
}
