#include "main.h"
/**
* print_alphabet_x10 - fun
*/
void print_alphabet_x10(void)
{
	char lt;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (lt = 'a'; lt <= 'z'; lt++)
		{
			_putchar(lt);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
