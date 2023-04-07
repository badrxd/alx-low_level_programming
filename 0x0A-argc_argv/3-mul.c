#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - function
* @argc: array length
* @argv: an array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int a;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", a);
	return (0);
}
