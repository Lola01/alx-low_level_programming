#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a - this is the first entry
 * @b - this is the second entry
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
