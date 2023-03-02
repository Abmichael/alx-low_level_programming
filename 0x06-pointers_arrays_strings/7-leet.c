#include "main.h"
/**
 * leet - encodes a string into 1337
 * @src: source string.
 * Return: char *src.
 */

char *leet(char *src)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (src[i] == leet[j])
			{
				src[i] = replace[j];
				break;
			}
		}
	}
	return (src);
}
