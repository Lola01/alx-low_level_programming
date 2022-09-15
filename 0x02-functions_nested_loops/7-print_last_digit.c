#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: input letter
 * Return: Always (Success)
 */
int print_last_digit(int n)
{
	int b;
	b = (n % 10);

	if (b < 0)
	{
		b = (-1 * b);
	}
	_putchar(b + '0');
	return (b);
}
