#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination value
 * @src: source value
 * @n: limit of concatenates
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, i = 0;

	while (dest[d++])
		i++;

	for (d = 0; src[d] && d < n; d++)
		dest[i++] = src[d];

	return (dest);
}
