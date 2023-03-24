#include "main.h"
/**
* print_triangle - fun
* @size: variable
*
* Return: 0
*/
void print_triangle(int size)
{
	int a, b, c;

	for (a = 0; a < size; a++)
	{
	for (b = 1; b < (size - a); b++)
	{
		_putchar(' ');
	}
	for (c = 0; c <= a; c++)
	{
		_putchar('#');
	}
	}
	_putchar('\n');
}
