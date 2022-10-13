#include "function_pointers.h"

/**
 * array_iterator - to executes a function on each element
 * array: the array of the elements
 * size: the size of the array
 * action: the pointer to the function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array != NULL && action != NULL && size > 0)
	{
		for (p = 0; p < size; p++)
		{
			action(array[p]);
		}
	}
}
