#include<stdio.h>

/**
 * main - Print the sizeof various types
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %ld byte(s)\n", sizeof(a));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of an long int: %ld byte(s)\n", sizeof(c));
	printf("Size of an long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of an float: %ld byte(s)\n", sizeof(e));
	return (0);
}
