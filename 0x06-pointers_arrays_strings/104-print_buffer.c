#include <stdio.h>

/**
 * print_hex - Prints the hexadecimal content of a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 * @i: The current index in the buffer
 * Return - void
 */
void print_hex(char *b, int size, int i)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
			printf("%02x", b[i + j]);
		else
			printf("  ");

		if (j % 2)
			putchar(' ');
	}
}

/**
 * print_char - Prints the character content of a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 * @i: The current index in the buffer
 * Return - void
 */
void print_char(char *b, int size, int i)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (i + j < size && b[i + j] >= ' ' && b[i + j] <= '~')
			putchar(b[i + j]);
		else if (i + j < size)
			putchar('.');
	}
}

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to print
 * @size: The size of the buffer in bytes
 *
 * Description: Prints the content of `size` bytes of
 * the buffer pointed by `b`.
 * Return - void
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		print_hex(b, size, i);

		print_char(b, size, i);

		putchar('\n');
	}

	if (size <= 0)
		putchar('\n');
}
