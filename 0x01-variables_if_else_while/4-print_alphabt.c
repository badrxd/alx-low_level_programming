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
	do {
		if (a == 103 || a == 90)
			a++;
			continue;
		putchar(a);
		a++;
	} while (a < 123);
	return (0);
}
