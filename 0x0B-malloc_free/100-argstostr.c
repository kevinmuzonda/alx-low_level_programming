#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates
 *  all the arguments of your program.
 *  @ac: Argument count
 *  @av: Argument vector
 *  Return:NULL if ac == 0 or av == NULL,
 *  a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int a, b, c = 0, n = 0;
	char *s;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			n++;
		n++;
	}
	n++;
	s = malloc(n * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{

			s[c] = av[a][b];
			c++;
		}
		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}
