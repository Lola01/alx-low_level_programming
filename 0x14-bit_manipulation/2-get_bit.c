#include "main.h"

/**
 * get_bit - to return the value of a bit at a given index
 * @n: the bit
 * @index: the index
 * Return: if an error occurs -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (1);
	return (0);
}
