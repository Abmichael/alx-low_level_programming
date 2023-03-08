#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to calculate the factorial of
 *
 * Return: the factorial of n
 *
 * Description: This function uses recursion to calculate the factorial of a
 * given number. It does this by calling itself with n-1 and multiplying its
 * result by n until it reaches 1. If n is lower than 0, it returns -1 to
 * indicate an error. The factorial of 0 is defined as 1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
