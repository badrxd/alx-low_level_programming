#include "main.h"
#include <string.h>
/**
* _puts - function
* @str: pointer
*
* Router: no return
*/
void _puts(char *str)
{
	int i, l;

	l = strlen(str);
	for (i = 0; i < l; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
