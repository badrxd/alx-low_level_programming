#include <stdio.h>
/**
 * main - fun
 *
 * Return: return 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0');
		else
			putchar(i + 87);
	}
	putchar('\n');
	return (0);
}
