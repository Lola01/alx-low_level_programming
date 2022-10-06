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
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(agrv[2]);
	c = a * b;
	printf("%d\n", c);
	return (0);
}
