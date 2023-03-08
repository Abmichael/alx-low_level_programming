#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the first character of the string to be printed
 *
 * Description: This function uses recursion to print each character of the
 * string in reverse order. It does this by first calling itself with the next
 * character in the string until it reaches the null terminator. It then prints
 * each character on its way back up the call stack.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_puts_recursion(s + 1);
	_putchar(*s);
}
