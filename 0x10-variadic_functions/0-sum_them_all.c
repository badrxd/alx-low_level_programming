#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - fun
* @n: val
*
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list lis;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(lis, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lis, int);
	}
	va_end(lis);
	return (sum);
}
