#include "main.h"
#include <stdio.h>
/**
* main - function
* @argc: array length
* @argv: an array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a;
	
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	a = (*argv[1] - '0') * (*argv[2] - '0');
	printf("%d\n", a);
	return (0);
}
