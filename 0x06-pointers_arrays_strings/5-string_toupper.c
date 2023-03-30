#include "main.h"
/**
* *string_toupper - fun
* @a: pointer
*
* Return: non
*/
char *string_toupper(char *a)
{
	int i;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
		i++;
	}
	return (n);
}
