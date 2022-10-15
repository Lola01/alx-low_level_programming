#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format - list of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int m = 0;
	char *str, *sep = "";
	va_list valist;

	va_start(valist, format);
	if (format)
	{
		while (format[m])
		{
			switch (format[m])
			{
				case 'c':
					printf("%s%c", sep, va_arg(valist, int);
					break;
				case 'i':
					printf("%s%d", sep va_arg(valist, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(valist, double));
					break;
				case 's':
					str = va_arg(valist, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					m++;
					continue;
			}
			sep = ", ";
			m++;
		}
		printf("\n");
		va_end(valist);
}
