#include <stdio.h>
/**
 *main - fun
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8  && j != 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
