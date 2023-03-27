#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev - function
*@s: a pointer
*
*Return: no return
*/
void print_rev(char *s)
{
	int i, l;

	l = strlen(s);
	for (i = (l - 1); i >= 0; i--)
	{
		printf("%c", *(s + i));
	}
}
