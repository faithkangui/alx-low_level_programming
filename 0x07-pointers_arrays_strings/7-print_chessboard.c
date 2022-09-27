#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: char
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < j; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
