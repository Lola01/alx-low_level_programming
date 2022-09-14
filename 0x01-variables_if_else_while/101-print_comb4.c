#include<stdio.h>

/**
 * main - print possible combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i, a, b;

	for (i = 0; i <= 9; i++)
	{
		for (a = 1; a <= 9; a++)
		{
			for (b = 2; b <= 9; b++)
			{
				if (b > a && a > i)
				{
					putchar(i + '0');
					putchar(a + '0');
					putchar(b + '0');
						if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
