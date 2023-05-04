#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - fun
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		numb = numb << 1;
		if (*b == '1')
			numb = numb | 1;
		b++;
	}
	return (numb);
}
