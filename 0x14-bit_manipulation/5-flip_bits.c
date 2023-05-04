#include "main.h"

/**
 * flip_bits - fun
 * @n: first number
 * @m: second number to convert to
 *
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	int counter = 0;

	while (result)
	{
		counter += result & 1;
		result >>= 1;
	}
	return (counter);
}
