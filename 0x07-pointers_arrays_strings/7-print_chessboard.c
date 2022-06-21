/**
 * print_chessboard - prints the chess_board array board
 * @a: the char array for the chess board
 */
#include "main.h"

void print_chessboard(char (*a)[8])
{
	for (int row = 0; row < 8; row++) {
            for (int col = 0; col < 8; col++)
                _putchar(a[row][col]);
	    _putchar('\n');
	}
}
