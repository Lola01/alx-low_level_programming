#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: source string
 * @accept: searching string
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (b = 0; *(s + b); b++)
	{
		for (a = 0; *(accept + a); a++)
		{
			if (*(s + b) == *(accept + a))
				break;
		}
	if (*(accept + a) == '\0')
		break;
	}
	return (b);
}
