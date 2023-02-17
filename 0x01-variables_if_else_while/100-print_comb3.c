#include <stdio.h>
/**
 *  * main - Entry Point
 *   *
 *    * Return: 0 on success
**/
int main(void)
{
	int i, j;

	for (i = (int)'0'; i <= (int)'9'; i++)
	{
		for (j = i; j <= (int)'9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (!(i == (int)'8' && j == (int)'9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
