#include "main.h"

/**
 * _strchr - searches first occurrence of c in s
 * @s: String
 * @c: char to search
 * Return: char *
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
