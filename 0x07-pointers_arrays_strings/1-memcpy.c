#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: source string
 * @src: string filling
 * @n: length of buffer
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		*(dest + m) = *(src + m);
		m++;
	}
	return (dest);
}
