#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - fun
* @separator: val
* @n: val
*
*Return: sum
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lis;
	char *str;
	unsigned int i;


	va_start(lis, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(lis, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(lis);
	printf("\n");
}
