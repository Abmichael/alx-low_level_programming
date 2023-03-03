#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = 0;

	if (size_r <= len1 || size_r <= len2)
		return (0);

	size_r--;
	r[size_r] = '\0';
	size_r--;

	while (len1 > 0 || len2 > 0 || carry > 0)
	{
		if (size_r < 0)
			return (0);

		if (len1 > 0 && len2 > 0)
			r[size_r] = n1[--len1] + n2[--len2] - '0' + carry;
		else if (len1 > 0)
			r[size_r] = n1[--len1] + carry;
		else if (len2 > 0)
			r[size_r] = n2[--len2] + carry;
		else
			r[size_r] = carry + '0';

		if (r[size_r] > '9')
		{
			carry = 1;
			r[size_r] -= 10;
		}
		else
			carry = 0;

		i++;
		size_r--;
	}

	return (&r[++size_r]);
}
