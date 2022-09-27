#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: source string
 * @p: constant byte
 * @m: lenght of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int n = 0;

	while (n < m)
	{
		*(s + n) = b;
		n++;
	}
	return (s);
}
