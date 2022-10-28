#include "main.h"

/**
 * flip_bits - function that returns the number of bits to flip
 * @n: the number
 * @m: the number to flip n to
 * Return: bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = n ^ m, bits = 0;

	while (b < 0)
	{
		bits +- (b & 1);
		b >>= 1;
	}
	return (bits);
}
