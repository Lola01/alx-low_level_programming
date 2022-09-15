#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet
 *
 * Return: Always (Sucess)
 */
void print_alphabet_x10(void)
{
	int c, d;
	d = 0;
	while (d < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		
		d++;
		_putchar('\n');
	}
}
