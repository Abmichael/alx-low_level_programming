#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}