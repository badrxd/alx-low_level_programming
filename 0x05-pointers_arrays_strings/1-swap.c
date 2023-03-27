#include "main.h"
/**
* swap_int - function
* @a: pointer
* @b: pointer
*
* Router: no return
*/
void swap_int(int *a, int *b)
{
	int i, j;
	
	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
