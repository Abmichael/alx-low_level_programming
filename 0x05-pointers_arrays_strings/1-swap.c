#include "main.h"

/**
 * swap_int - swap the valuses of two integers a and b
 *@a: num1
 *@b: num2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}