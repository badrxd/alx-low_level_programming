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
	int val1, val2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(operator))
	{
		result = get_op_func(operator)(val1, val2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
