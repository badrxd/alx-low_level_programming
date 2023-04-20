#include "3-calc.h"
/**
* main - fun
* @argc: len
* @argv: arr
*
* Return: 0
*/

int main(int argc, char *argv[])
{
	int val1, val2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);

	if (get_op_func(argv[2]))
	{
		printf("%d\n", get_op_func(argv[2])(val1, val2));
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
