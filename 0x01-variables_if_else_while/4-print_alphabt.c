#include<stdio.h>

/**
 * main - Prints all the letters in lowercase except q and e
 *
 * Return; Always (Successful)
 */
int main(void)
{
	char c;

	for (c ='a'; c <= 'z'; c++)
	{
		if(c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
