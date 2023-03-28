#include "main.h"
/**
* rev_string - function
*@s: a pointer
*
*Return: no return
*/
void rev_string(char *s)
{
	int i, l;
	char c = s[0];

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}

	for (i = 0; i < l; i++)
	{
		l--;
		c = s[i];
		s[i] = s[l];
		s[l] = c;
	}
}
