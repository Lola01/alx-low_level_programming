#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pa - palindrome
 * @s: pointer to string
 * @r: position
 * Return: void
 */
int pa(char *s, int r)
{
	if (r < 1)
	{
		return (1);
	}
	if (*s == *(s + 1))
	{
		return (pa(s + 1, 1 - 2));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: void
 */
int is_palindrome(char *s)
{
	int a = _strlen_recursion(s);

	return (pa(s, a - 1));
}
