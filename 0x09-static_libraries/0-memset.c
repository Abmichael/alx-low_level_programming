#include "main.h"
/**
 *_memset -   fills memory with a constant byte
 *@s: pointer to a block of memory to be filled
 *@b: value to set
 *@n: bytes of the memory
 *Return: char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;

	}

	return (s);
}
