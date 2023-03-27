#include "main.h"
/**
* rev_string - function
*@s: a pointer
*
*Return: no return
*/
void rev_string(char *s)
{
	int i;
	char c[10];

	for (i = 0; i <= 9; i++)
	{
		if (s[i] == '\0')
			break;
		c[i] = s[i];
	}

	for (i = 9; i >= 0; i--)
	{
		if (c[i] == '\0')
			continue;
		s[i] = c[i];
	}
}
