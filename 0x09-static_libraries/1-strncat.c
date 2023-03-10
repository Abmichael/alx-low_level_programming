#include "main.h"
/**
 *_strncat - concatenates two strings up to n
 *@dest: string literal to append to
 *@src: string literal to append from
 *@n: upper limit
 *Return: char *
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	j = 0;
	while (j < n && src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
