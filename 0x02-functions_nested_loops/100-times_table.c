#include "main.h"

/**
 *  print_digits - prints all digits of a number recursively
 * @n: - the number to print
 * Return: void
*/

void print_digits(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		print_digits(n / 10);

	_putchar(n % 10 + '0');
}
/**
 *  print_spaces - prints spaces n times
 * @n: - the number of spaces to print
 * Return: void
*/
void print_spaces(int n)
{
	while (n)
	{
		_putchar(' ');
		n--;
	}
}

/**
 *  print_times_table - prints n times table
 * @n: - the number to print table upto
 * Return: void
*/
void print_times_table(int n)
{
	int i, j, res;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (j == 0)
				print_spaces(0);
			else if (res <= 9)
				print_spaces(3);
			else if (res <= 99)
				print_spaces(2);
			else
				print_spaces(1);
			print_digits(res);
			if (j < n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
