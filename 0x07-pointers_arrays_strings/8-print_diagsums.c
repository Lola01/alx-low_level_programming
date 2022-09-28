#include "main.h"
#include <stdio.h>

/** print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: pointer to array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, sizec;
	unsigned int d, e;

	sizec = 0;
	d = 0;
	e = 0;

	sizec = (size * size) - 1;
	for (b = 0; b <= sizec; b = b + (size + 1))
	{
		d = d + a[b];
	}
	for (b = (size - 1); b < sizec; b = b + (size - 1))
	{
		e = e + a[b];
	}
	printf("%d, %d\n", d, e);
}
