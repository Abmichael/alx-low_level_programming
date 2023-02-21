#include <stdio.h>
/**
 *  * main - Entry Point
 *   *
 *    * Return: 0 on success
**/
int main(void)
{
	int i;
	long int num1, num2, temp;

	num1 = 1, num2 = 1;
	for (i = 1; i <= 50; i++)
	{
		temp = num1;
		num1 = num1 + num2;
		num2 = temp;
		if (i < 50)
			printf("%ld, ", num2);
		else
			printf("%ld", num2);
	}
	printf("\n");

	return (0);
}
