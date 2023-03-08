#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the first character of the string
 *
 * Return: the length of the string
 *
 * Description: This function uses recursion to count the number of characters
 * in a string until it reaches the null terminator. It does this by calling
 * itself with the next character in the string and adding 1 to the result each
 * time until it reaches the null terminator.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
