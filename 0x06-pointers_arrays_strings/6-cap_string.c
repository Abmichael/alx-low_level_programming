#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @src: source string
 * Return: char*
 */

char _toupper(char src)
{
	if (src >= 'a' && src <= 'z')
	{
		src = src - 32;
	}

	return (src);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: source string.
 * Return: char *
 */

char *cap_string(char *s)
{
	int i, isStarter = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isStarter)
		{
			s[i] = _toupper(s[i]);
			isStarter = 0;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				 s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
				 s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
				 s[i] == '{' || s[i] == '}')
			isStarter = 1;
	}
	return (s);
}
