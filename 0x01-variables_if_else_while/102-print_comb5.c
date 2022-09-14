#include<stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int d, e;

	for (d = 0; d < 100; d++)
	{
		for (e = 0; e < 100; e++)
		{
			if (e > d)
			{
				putchar((d / 10) + '0');
				putchar((d % 10) + '0');
				putchar(' ');
				putchar((e / 10) + '0');
				putchar((e % 10) + '0');
				if (d != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
