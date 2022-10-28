#include "main.h" 

/**
 * binary_to_uint - to convert a binary number to an unsigned int.
 * @b: string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int z = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		z = 2 * z + (b[i] - '0');
	}
	return (z);
}
