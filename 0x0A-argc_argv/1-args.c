#include <stdio.h>

/**
 * main - a  program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
