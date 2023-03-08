#include "main.h"

/**
 * wildcmp - compares two strings for equality
 * @s1: first string to compare
 * @s2: second string to compare, can contain '*'
 * Return: 1 if the strings can be considered identical, 0 otherwise
 *
 * The wildcard character '*' can replace any string (including an empty one)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));

		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
