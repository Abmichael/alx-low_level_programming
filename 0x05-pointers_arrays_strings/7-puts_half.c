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
 * puts_half - print second half of a string
 *  If odd number of chars, print (length - 1) / 2
 * @str: char array string type
 * Return - void
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int mid = len / 2;
	int i;

	if (len % 2 == 1)
	{
		mid++;
	}

	for (i = mid; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
