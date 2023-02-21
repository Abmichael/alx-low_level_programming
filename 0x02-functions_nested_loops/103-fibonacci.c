#include <stdio.h>
/**
 *  * main - Entry Point
 *   *
 *    * Return: 0 on success
**/
int main(void)
{
	long int num1, num2, temp, sum;

	num1 = 1, num2 = 1, sum = 0;
	while (1)
	{
		temp = num1;
		num1 = num1 + num2;
		num2 = temp;
		if (num2 >= 4000000)
			break;
		if (num2 % 2 == 0)
			sum += num2;
	}
	printf("%ld\n", sum);

	return (0);
}
