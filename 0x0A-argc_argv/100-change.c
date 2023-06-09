#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
* main - function
* @argc: array length
* @argv: an array
* Return: 0
*/
int main(int argc, char **argv)
{
	int i, coins, cents, c_array[5] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		coins = coins + (cents / c_array[i]);
		cents = cents % c_array[i];
	}
	printf("%d\n", coins);
	return (0);
}
