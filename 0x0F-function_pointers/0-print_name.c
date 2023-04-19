#include "function_pointers.h"
/**
* print_name - function
* @name: value
* @f: pointer to function
*
* Return: no return
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);

}
