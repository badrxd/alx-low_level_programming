 #include "main.h"
/**
* print_diagsums - fun
* @a: array
* size: value
* Return: a
*/
void print_diagsums(int *a, int size)
{
	int s1, s2, i;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
		s1 = s1 + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
		s2 += a[i * size + (size - i - 1)];
	printf("%d, %d\n", s1 ,s2);
}
