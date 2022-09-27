#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: source string
 * @b: constant byte
 * @n: lenght of buffer
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l = 0;

	while (l < n)
	{
		*(s + l) = b;
		l++;
	}
	return (s);
}
