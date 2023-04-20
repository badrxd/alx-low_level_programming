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
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	val1 = atoi(argv[1]);
	val2 = atoi(argv[3]);
	operator = argv[2];

	op_func = get_op_func(operator);
	if (!op_func)
	{
		printf("Error\n");
		return (99);
	}
	result = op_func(val1, val2);
	printf("%d\n", result);
	return (0);
}
