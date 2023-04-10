#include "main.h"
/**
* _strlen - function
*@s: a pointer
*
*Return: no return
*/
int _strlen(char *s)
{
	int i, l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
		l++;
	return (l);
}
