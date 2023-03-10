#include "main.h"
/**
 *_strncpy - copies a string
 *@dest: string literal to copy to
 *@src: string literal to copy from
 *@n: upper limit
 *Return: char * dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
