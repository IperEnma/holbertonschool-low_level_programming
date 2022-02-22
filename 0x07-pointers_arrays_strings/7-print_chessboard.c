#include "main.h"
/**
 * print_chessboard - print chessboard
 * @a: char chessboard
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j != 7)
			{
				_putchar(a[i][j]);
			}
			else
			{
				_putchar(a[i][j]);
				_putchar(10);
			}
		}
	}
}
