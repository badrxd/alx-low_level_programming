#include "main.h"
/**
* print_triangle - fun
* @size: variable
*
* Return: 0
*/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((a + b) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			 _putchar('\n');
		}
	}
}
