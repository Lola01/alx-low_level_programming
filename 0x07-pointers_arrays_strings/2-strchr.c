#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: character to be searched
 * Return: a pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*DECLARING WHILE*/
	{
		if (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0); /* values null*/
}
