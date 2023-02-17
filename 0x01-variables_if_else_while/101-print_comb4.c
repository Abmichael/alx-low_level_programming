#include <stdio.h>
/**
 *  * main - Entry Point
 *   *
 *    * Return: 0 on success
**/
int main(void)
{
	int i, j, k;

	for (i = (int)'0'; i <= (int)'9'; i++)
	{
		for (j = i; j <= (int)'9'; j++)
		{
			for (k = j; k <= (int)'9'; k++)
			{
				if (i != j && j != k && i != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (!(i == (int)'7' && j == (int)'8' && k == (int)'9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
