#include "main.h"

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always (successful)
 */
void print_alphabet(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
		_putchar(c);
		}
	}

	_putchar('\n');
}
