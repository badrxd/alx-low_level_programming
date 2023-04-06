#include "main.h"
/**
* check_palindrome - returns 1 if pal and 0 if not
* @s: string
* @l:left index
* @r:right index
* Return: 1 or 0
*/
int check_palindrome(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	else if (s[l] == s[r])
		return (check_palindrome(s,  l + 1, r - 1));
	else
		return (0);
}
/**
* _strlen_recursion - returns the lenght
* @s: string
* Return: lenght of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}
/**
* is_palindrome - returns 1 if palin and 0 if not
* @s: string
* Return: 1 or 0
*/
int is_palindrome(char *s)
{
	if (_strlen_recursion(s) == 0 || _strlen_recursion(s) == 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
