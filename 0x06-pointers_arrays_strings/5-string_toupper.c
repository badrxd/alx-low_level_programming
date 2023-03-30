#include "main.h"
/**
* *string_toupper - fun
* @a: pointer
*
* Return: a
*/
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = *(a + i) - 32;
		i++;
	}
	return (a);
}
