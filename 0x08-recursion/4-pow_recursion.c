#include "main.h"
/**
* _pow_recursion - fun
* @x: pointer
* @y: pointer
* Return: x
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (n == 0)
		return (1);
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
