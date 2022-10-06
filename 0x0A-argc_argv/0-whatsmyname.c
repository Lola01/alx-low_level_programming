#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv:the array of pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
