#include "main.h"
/**
* print_diagonal - fun
* @n: variable
* Return: no return
*/
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	}
	_putchar('\n');
}
