#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @src: source string
 * Return: char*
 */

char *string_toupper(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
		}
	}

	return (src);
}

/**
 * isalpha - checks if a char is an alphabet
 * @c: source char
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: source string.
 * Return: char *
 */

char *cap_string(char *s)
{
	int isStarter = 1;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (isStarter && _isalpha(s[i]))
		{
			s[i] = string_toupper(s[i]);
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
