/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to search for
 *
 * Return: the number of characters in the initial segment of s which
 * consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		if (check_accept(s[i], accept))
		{
			count++;
		}
		else
		{
			break;
		}
		i++;
	}
	return (count);
}

/**
 * check_accept - checks if c is in str
 * @c: the character to check
 * @str: the string to search
 *
 * Return: 1 if the character is found, 0 otherwise
 */
int check_accept(char c, char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] == c)
		{
			return (1);
		}
		j++;
	}
	return (0);
}
