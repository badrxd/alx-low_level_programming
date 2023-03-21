#include "main.h"
/**
* print_last_digit - f
* @c: value
* Return: return c
*/
int print_last_digit(int c)
{
	c = c % 10;
	_putchar('0' + c);
	return (c);
}
