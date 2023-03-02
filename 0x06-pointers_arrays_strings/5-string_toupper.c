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
