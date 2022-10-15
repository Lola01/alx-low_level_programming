#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - returns a pointer to the function of the operator
 * @s: the operator passed as argument to the program
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int t;

	t = 0;
	while (t < 5)
	{
		if (s[0] == ops[t].op[0])
		{
			return (ops[t].f);
		}
		t++;
	}
	return (NULL);
}
