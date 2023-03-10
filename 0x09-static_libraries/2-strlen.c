#include "main.h"

/**
 *_strlen - return the length of a string literal
 *@s: string literal
 *
 *Return: int
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
