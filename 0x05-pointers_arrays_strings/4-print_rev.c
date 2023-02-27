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

/**
 * print_rev - prints a sting in reverse
 *@s: string literal
 *
 *Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);

	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
