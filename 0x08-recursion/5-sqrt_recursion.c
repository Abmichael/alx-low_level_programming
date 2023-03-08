#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n
 *
 * Description: This function uses recursion to calculate the natural square
 * root of a given number. It does this by calling a helper function with n and
 * 1 as arguments. The helper function increments its second argument until it
 * finds a number whose square is equal to n or greater than n. If it finds a
 * number whose square is equal to n, it returns that number. Otherwise, it
 * returns -1 to indicate that n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root of n
 *
 * Return: the natural square root of n or -1 if n does not have a natural
 * square root
 *
 * Description: This function increments i until it finds a number whose square
 * is equal to n or greater than n. If it finds a number whose square
 * is equal to
 * n, it returns that number. Otherwise, it returns -1.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
