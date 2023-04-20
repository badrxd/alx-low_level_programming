#include "3-calc.h"

/**
* op_add - fun
* @a: val
* @b: val
*
* Return: a+b
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - fun
* @a: val
* @b: val
*
* Return: a-b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - fun
* @a: val
* @b: val
*
* Return: a * b
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - fun
* @a: val
* @b: val
*
* Return: a / b
*/

int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - fun
* @a: val
* @b: val
*
* Return: a % b
*/

int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
