#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array of pointers
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; c <= 7; c++)
	{
		for (d = 0; d <= 7; d++)
		{
			_putchar(a[c][d]);
		}
		_putchar(10);
	}
}
