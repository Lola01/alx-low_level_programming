#include<stdio.h>

/**
 * main - print all possible combinations of single-digit numbers with commas.
 *
 * Return: Alway (Successful)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);

		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');
	
	return (0);
}
