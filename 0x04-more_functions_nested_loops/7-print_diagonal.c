#include "main.h"
/**
* print_diagonal - fun
* @n: variable
* Return: no return
*/
void print_diagonal(int n)
{
	int a;
	int b;

	b = 0;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
