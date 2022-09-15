#include "main.h"
/**
 * times_tables - function that prints the 9 times table, starting with 0
 * r = row, cl = column, d = digits
 * Return: Always (Success)
 */
void times_table(void)
{
	int r, cl, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		
		for (cl = 0; cl <= 9; cl++)
		{
			d = (r * cl);

			if ((d / 10) > 0)
			{
				_putchar((d /10) + '0');
			}
			else
			{
				_putchar(' ');
			}
		}
	}

}