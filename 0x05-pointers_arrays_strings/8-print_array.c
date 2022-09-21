#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: this is the pointer to array
 * @n: this is number of array elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n -1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
