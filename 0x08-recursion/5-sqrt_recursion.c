#include "main.h"
/**
* _sqrt - fun
* @a: value
* @b: value
* Return: n
*/
int _sqrt(int a, int b)
{
	if ((b * b) == a)
	{
		return (b);
	}
	else
	{
		if ((b * b) > a)
			return (-1);
		else
			return (_sqrt(a, b + 1));
	}
}

/**
* _sqrt_recursion - fun
* @n: value
* Return: n
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
