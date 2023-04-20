#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - fun
* @separator: val
* @n: val
*
*Return: sum
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	int num1 = 0;
	unsigned int i;


	va_start(lis, n);

	for (i = 0; i < n; i++)
	{
		num1 = va_arg(lis, int);
		printf("%d", num1);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(lis);
	printf("\n");
}
