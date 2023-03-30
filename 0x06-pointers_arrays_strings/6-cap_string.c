#include "main.h"
/**
* *cap_string - fun
* @a: pointer
*
* Return: a
*/
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		if ((a[i] == 32 || a[i] == '\n' || a[i] == '\t' ||
		 a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i]
		 == '!' || a[i] == '?' || a[i] == '\"' || a[i] == '('
		 || a[i] == ')' || a[i] == '{' || a[i] == '}')  &&
		 (a[i + 1] >= 'a' && a[i + 1] <= 'z'))
			a[i + 1] = a[i + 1] - 32;
		i++;
	}
	return (a);
}
