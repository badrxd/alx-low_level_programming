#include <stdio.h>
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
	int i, coins, cents, c_array[5] = {25, 10, 5, 2, 1}, b;

	coins = 0;
	cents = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = 0;
	while (argv[1][b])
	{
		if (!isdigit(argv[1][b]))
		{
			printf("0\n");
			return (0);
		}
		b++;
	}
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
