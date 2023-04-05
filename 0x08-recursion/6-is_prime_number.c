#include "main.h"
/**
* prime_number - fun
* @a: value
* @b: value
* Return: n
*/
int prime_number(int a, int b)
{
	if (b < a)
	{
		if (a % b == 0)
			return (0);
		else
			return (prime_number(a, b + 1));
	}
	else
	{
		return (b);
	}
}

/**
* is_prime_number - fun
* @n: value
* Return: n
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_number(n, 2));
}
