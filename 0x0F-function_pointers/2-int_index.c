#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer 
 * @array: the array of elements
 * @size: the number of elements
 * @cmp: a pointer to the function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p, x;

	x = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (x);
		}
	       for (p = 0; p < size; p++)
	       {
		       cmp(array[p]);
		       if (cmp(array[p]) > 0)
		       {
			       x = p;
			       break;
		       }
		       if (cmp (array[p]) == (-1))
		       {
			       return (x);
		       }
	       }
	}
	return (x);
}
