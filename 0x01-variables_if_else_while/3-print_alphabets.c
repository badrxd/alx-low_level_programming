#include <stdio.h>
/**
 * main - fun
 *
 * Return: rerurn 0
 */
int main(void)
{
	int a, b;

	a = 97;
	b = 65;
	while (a < 123)
	{
		putchar(a);
		a++;
	}
	while (b < 91)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
