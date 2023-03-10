#include "main.h"
/**
 *_puts - prints a string just like printf
 *@str: string literal
 *
 *Return: void
 */

void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}

	_putchar('\n');
}
