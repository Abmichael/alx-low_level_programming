#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
				s[i] -= 13;
			else
				s[i] += 13;
		}
	}

	return (s);
}
