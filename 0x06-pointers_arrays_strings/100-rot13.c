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
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (a[i])
	{
		for (l = 0; l < 52; l++)
		{
			if (a[i] == b[l])
			{
				a[i] = c[l];
				break;
			{
		}
	i++;
	}
	return (a);
}
