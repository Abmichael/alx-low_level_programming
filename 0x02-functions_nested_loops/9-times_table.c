#include "main.h"

/**
 *  times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if ((res / 10) == 0)
			{
				if (j == 0)
					_putchar('0');
				else
				{
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
