 #include "main.h"
/**
* print_chessboard - fun
* @a: array
* Return: dest
*/
void print_chessboard(char (*a)[8])
{
	int i, l;

	for (i = 0; i < 8; i++)
	{
		for (l = 0; l < 8; l++)
			_putchar(a[i][l]);
		_putchar('\n');
	}
}
