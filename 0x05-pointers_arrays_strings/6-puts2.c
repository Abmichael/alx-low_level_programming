#include "main.h"

/**
 *puts2 - prints every other character of a string(only even indices)
 *@str: string literal
 *
 *Return: void
 */

void puts2(char *str)
{
	int len;

	for (len = 0; str[len]; len++)
	{
		if (len % 2 == 0)
			_putchar(str[len]);
	}

	_putchar('\n');
}
