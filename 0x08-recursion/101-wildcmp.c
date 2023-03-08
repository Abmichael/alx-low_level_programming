#include "main.h"

/**
 * wildcmp - compares two strings with wildcard character
 * @s1: first string to compare
 * @s2: second string to compare, can contain '*'
 * Return: 1 if the strings can be considered identical, 0 otherwise
 *
 * The wildcard character '*' can replace any string (including an empty one)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
}
