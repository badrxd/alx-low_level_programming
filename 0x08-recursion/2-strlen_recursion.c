#include "main.h"
/**
* _strlen_recursion - fun
* @s: pointer
* Return: i
*/
int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if (*s == '\0')
	{
		return (1);
	}
	s++;
	i = i + _strlen_recursion(s);
	return (i);
}
