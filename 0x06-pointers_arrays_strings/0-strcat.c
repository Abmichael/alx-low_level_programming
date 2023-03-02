#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: string literal to append to
 *@src: string literal to append from
 *Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
		i++;

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}