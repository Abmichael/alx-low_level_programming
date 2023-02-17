#include <stdio.h>
/**
 *  * main - Entry Point
 *   *
 *    * Return: 0 on success
**/
int main(void)
{
	int a = (int)'0';

	while (a <= (int)'9')
	{
		putchar(a);
		if (a != (int)'9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);

}
