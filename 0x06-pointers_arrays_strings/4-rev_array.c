#include "main.h"
/**
* reverse_array - fun
* @a: pointer
* @n: pointer
*
* Return: non
*/
void reverse_array(int *a, int n)
{
	int i, b, l;

	for (i = 0; i < l; i++)
	{
		b = a[i];
		a[i] = a[n - i];
		a[n - i] = b;
	}
}
