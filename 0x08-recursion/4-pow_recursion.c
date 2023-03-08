#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y
 *
 * Description: This function uses recursion to calculate the value of x raised
 * to the power of y. It does this by calling itself with y-1 and multiplying
 * its result by x until it reaches 0. If y is lower than 0, it returns -1 to
 * indicate an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
