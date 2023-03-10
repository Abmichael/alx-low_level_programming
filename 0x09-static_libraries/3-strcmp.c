#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: string literal 1
 *@s2: string literal 2
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
