#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: The pointer to convert
 * Return: void
 */
int _atoi(char *s)
{
	int c;
	unsigned int n;
	char temp;

	temp = s;
	n = 0;
	c = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			c *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			n = n * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (n * c);
}
