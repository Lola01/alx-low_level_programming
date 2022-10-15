#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format - list of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int m;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	m = 0;
	while (format && format[m])
	{
		switch (format[m])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int);
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int);
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				m++;
				continue;
		}
		separator = ", ";
		m++;

	}
	printf("\n");
	va_end(args);
}
