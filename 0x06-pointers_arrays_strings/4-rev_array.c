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
	int i, b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
