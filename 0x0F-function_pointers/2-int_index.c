#include "function_pointers.h"

/**
 * int index - a function that searches for an integer 
 * @array: the array of elements
 * @size: the number of elements
 * @cmp: a pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (p < size)
			{
				if (cmp(array=[p]))
					return (p);
				p++;
			}
		}
	}
}
