#include "main.h"
/**
 *  * _islower - checks if a given character is lowercase
 *   * @c: The character to be checked
 *    * Return: void
**/
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
