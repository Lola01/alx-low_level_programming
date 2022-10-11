#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int t = 0, x = 0, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		while (av[x][y])
		{
			t++;
			y++;
		}
		y = 0;
		x++;
	}
	s = malloc((sizeof(char) *  t) + ac + 1);
	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			s[z] = av[x][y];
			z++;
			y++;
		}
		s[z] = '\n';
		y = 0;
		z++;
		x++;
	}
	z++;
	s[z] = '\n';
	return (s);
}
