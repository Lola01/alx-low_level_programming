#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments
 * @...: a variable number of parameters
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, p;

	va_list arglist;
	if (n == 0)
		return (0);
	va_start(arglist, n);	
	for (p = 0; p < n; p++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);
	return (sum);
}
