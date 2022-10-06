#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: numbr of arguments
 * @argv: array of pointers to the argument
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int a, b;

	b = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		b = b * atol(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
