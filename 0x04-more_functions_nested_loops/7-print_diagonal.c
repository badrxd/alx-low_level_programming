#include "main.h"
#include <stdio.h>
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
	if (a > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b <= a; b++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
	putchar('\n');
}
