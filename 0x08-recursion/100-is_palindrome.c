#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome_helper - helper function to check if a string is a palindrome
 * @s: the string to check
 * @start: the starting index to check
 * @end: the ending index to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * This function uses a helper function `is_palindrome_helper` to check
 * the characters at the start and end of the string. If they match,
 * it recursively checks the inner substring. If all pairs of characters
 * match, then the string is a palindrome and the function returns `1`.
 * Otherwise it returns `0`.
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
