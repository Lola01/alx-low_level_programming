#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: to be searched in haystack
 * Return: return 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *g, *h; /*Declaring variables*/

	while (*haystack != '\0')
	{
		g = haystack; /*values*/
		h = needle;

		/*star WHILE*/
		while (*haystack != '\0' && *h != '\0' && *haystack == *h)
		{
			haystack++;
			h++;
		}
		if (*h == '\0')
			return (g);
		haystack = g + 1;
	}
	return (0);
}
