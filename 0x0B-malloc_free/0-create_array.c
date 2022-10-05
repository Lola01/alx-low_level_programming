#include "main.h"
#include <stdlib.h>

/**
 * create_array - to creates an array of chars, and initializes it.
 * @size: the size of array
 * @c: char to fill in the array
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *t;

	if (size == 0)
		return (NULL);
	t = malloc(size * sizeof(char));
	if (t == NULL)
		return (NULL);
	for (r = 0; r < size; r++)
	{
		t[r] = c;
	}
	return (t);
}
