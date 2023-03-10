#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *search = needle;

		while (*haystack && *search && *haystack == *search)
		{
			haystack++;
			search++;
		}

		if (!*search)
			return (start);

		haystack = start + 1;
	}
	return (0);
}
