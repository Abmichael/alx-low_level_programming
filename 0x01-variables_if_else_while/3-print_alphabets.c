#include <stdio.h>
/**
 *  * main - Entry Point
 *   *
 *    * Return: 0 on success
**/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);

}
