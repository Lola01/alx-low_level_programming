#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char
 * @arg: A list of arguments
 * Return: 0
 */
void print_char(va_list arg)
{
	char w;

	w = va_arg(arg, int);
	printf("%c", w);
}

/**
 * print_int - Prints an integer
 * @arg: A list of arguments
 * Return: 0
 */
void print_int(va_list arg)
{
	int x;

	x = va_arg(arg, int);
	printf("%d", x);
}

/**
 * print_float - Prints a float
 * @arg: A list of arguments
 * Return: 0
 */
void print_float(va_list arg)
{
	float x;

	x = va_arg(arg, double);
	printf("%f", x);
}

/**
 * print_string - Prints a string.
 * @arg: A list of arguments
 * Return: 0
 */
void print_string(va_list arg)
{
	char *y;

	y = va_arg(arg, char *);
	if (y == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", y);
}

/**
 * print_all - Prints anything, followed by a new line
 * @format: A string of characters representing the argument types
 * @...: A variable number of arguments to be printed.
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int m = 0, n = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + m)))
	{
		n = 0;

		while (n < 4 && (*(format + m) != *(funcs[n].symbol)))
			n++;
		if (n < 4)
		{
			printf("%s", separator);
			funcs[n].print(args);
			separator = ", ";
		}
		m++;
	}
	printf("\n");
	va_end(args);
}
