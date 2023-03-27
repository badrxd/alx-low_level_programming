#include "main.h"
#include <stdio.h>
/**
* print_array - function
* @a: a pointer
* @n: a pointer
*
* Return: no return
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
		printf("%d",a[i - 1])
	_putchar('\n');
}
