#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the first character of the string to be printed
 *
 * Description: This function uses recursion to print each character of the
 * string until it reaches the null terminator. It then prints a new line.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
