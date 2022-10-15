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
	va_list valist;
	unsigned int m, l, n = 0;
	char *s;
	const char t_arg[] ="cifs"

	va_start(valist, format);
	m = 0;
	while (format && format[m])
	{
		l = 0;
		while (t_arg[l])
		{
			if (format[m] == t_arg[l] && c)
			{
				printf(", ");
				break;
			}
			l++;
		}
		switch (format[m])
		{
			case 'c':
				printf("%c", va_arg(valist, int)), n = 1;
				break;
			case 'i':
				printf("%d", va_arg(valist, int)), n = 1;
				break;
			case 'f':
				printf("%f", va_arg(valist, double)), n = 1;
				break;
			case 's':
				s = va_arg(valist, char *),n = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		m++;
	}

	printf("\n");
	va_end(valist);
}
