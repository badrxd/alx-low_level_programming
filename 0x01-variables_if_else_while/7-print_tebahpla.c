#include <stdio.h>
/**
 * main - fun
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 9; i >= 0; i--)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
