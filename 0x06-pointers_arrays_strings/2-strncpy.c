#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination value
 * @src: source value
 * @n: the copy limit
 * Return: returns char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	for (l = 0; l < n && src[l] != '\0'; l++)
		dest[l] = src[l];

	for ( ; l < n; l++)
		dest[l] = '\0';

	return (dest);
}
