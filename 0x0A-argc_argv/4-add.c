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
	int i, a, b, c;

	a = 0;
	c = 0;
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		b = 0;
		while (argv[i][b])
		{
			if (!isdigit(argv[i][b]))
			{
				c = 1;
				break;
			}
			b++;
		}
		if (c == 0)
		{
			a = a + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", a);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
