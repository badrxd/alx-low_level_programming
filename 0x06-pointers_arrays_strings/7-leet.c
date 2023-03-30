#include "main.h"
/**
* *leet - fun
* @a: pointer
*
* Return: a
*/

char *leet(char *a)
{
	int i, l;
	char c[] = "AEOTL";
	char d[] = "43071";

	while (a[i])
	{
		for (l = 0; l < 5; l++)
		{
			if (a[i] == c[l] || a[i] == c[l] + 32)
				a[i] = d[l];
		}
	i++;
	}
	return (a);
}
