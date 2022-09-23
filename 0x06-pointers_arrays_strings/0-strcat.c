#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: A pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, i;
	
	while (dest[x])
	{
		x++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[x] = src[i];
		x++;
	}
	return (dest);
}
