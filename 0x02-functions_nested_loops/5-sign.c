#include "main.h"

/**
 * print_sign - return 0 n is 0, 1 n positive, -1 n negative
 *
 *@n: the int to check
 * Return: Always sign of n.
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else if (n >  0)
	{
		_putchar ('+');
		return (1);
	}

	else
	{
		_putchar ('-');
		return (-1);
	}

}
