#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: a variable number of strings to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	char *s;
	unsigned int t;

	va_start(p, n);
	for (t = 0; t < n; t++)
	{
		s = va_arg(p, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (t != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
