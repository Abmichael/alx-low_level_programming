#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string literal to be scanned.
 * @accept: acceptable segment
 *Return: string s that matches any character specified in accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}

			i++;
		}

		s++;
	}
	return (0);
}
