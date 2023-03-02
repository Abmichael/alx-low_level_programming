#include "main.h"
/**
 * _toupper - changes all lowercase letters of a string to uppercase
 * @src: source string
 * Return: char
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
 * _isAlpha - checks if c is an alphabet
 * @s: source char
 * Return: int
 */
int _isAlpha(char s)
{
	if ((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z'))
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
	int i, isStarter = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isStarter && _isAlpha(s[i]))
		{
			s[i] = _toupper(s[i]);
			isStarter = 0;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				 s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
				 s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
				 s[i] == '{' || s[i] == '}')
			isStarter = 1;
		else if(isStarter && !_isAlpha(s[i]))
			isStarter = 0;
	}
	return (s);
}
