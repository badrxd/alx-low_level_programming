#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - fun
 *
 * Return: return 0
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n%10 > 5)
		printf("Last digit of %d and is greater than 5\n")
	else if(n%10 == 0)
		printf("Last digit of %d and is 0")
	else
		printf("Last digit of %d and is less than 6 and not 0\n")
	return (0);
}
