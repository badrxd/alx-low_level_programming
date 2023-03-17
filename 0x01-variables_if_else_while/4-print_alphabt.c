#include <stdio.h>
/**
 * main - fun
 *
 * Return: return 0
 */
int main(void)
{
	int a;

	a = 97;
	while (a < 12)
	{
		if (a != 101 || a != 113)
			putchar(a);
		a++;
	}
	return (0);
}
