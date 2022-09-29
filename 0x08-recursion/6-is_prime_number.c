#include "main.h"

/**
 * evaluate_numb - recursion
 * @n: integer
 * @i: iterator
 * Return: 1 or 0
 */
int evaluate_numb(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0)
	{
		return (evaluate_numb(n, i + 1));
	}
	return (0);
}

/**
 * is_prime_number - evaluate prime or not
 * @n: integer
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (evaluate_numb(n, i));
}

