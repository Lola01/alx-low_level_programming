#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 *
 * Return: Always (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}