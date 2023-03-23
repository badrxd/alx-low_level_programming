#include "main.h"
/**
* print_diagonal - fun
* @n: variable
* Return: no return
*/
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b <= a; b++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar('\n');
	}
	_putchar('\n');
}
