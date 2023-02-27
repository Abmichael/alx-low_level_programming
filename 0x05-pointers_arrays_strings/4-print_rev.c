#include "main.h"
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
