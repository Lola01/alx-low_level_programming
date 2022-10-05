#include "main.h"
#include <stdlib.h>

/**
 * _strdup - to returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: 0
 */
char *_strdup(char *str)
{
	int m = 0; 
	int n = 1;
	char *l;

	if (str == NULL)
		return (NULL);
	while (str [n])
	{
		n++;
	}
	l = malloc((sizeof(char) * n) + 1);
	if (l == NULL)
		return (NULL);
	while (m < n)
	{
		l[m] = str[m];
		m++;
	}
	l[m] = '\0';
	return (l);
}
