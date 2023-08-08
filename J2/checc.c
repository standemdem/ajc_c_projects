#include <stdio.h>

int main()
{
    /* code */
    int chess_size= 8;
    char chess_board[8][8];
    for (int i = 0; i < chess_size; i++)
    {
        for (int j = 0; j < chess_size; j++)
        {
            chess_board[i][j] = '0';
            // printf("%c", chess_board[i][j]);
        }
        // printf("\n");
    }

    chess_board[0][7] = 'T';
    chess_board[1][0] = 'K';
    chess_board[1][1] = 'P';
    chess_board[1][5] = 'P';
    chess_board[2][3] = 'Q';
    chess_board[2][5] = 'F';
    chess_board[3][1] = 'T';
    chess_board[3][3] = 'P';
    chess_board[3][7] = 'P';
    chess_board[4][1] = 'P';
    chess_board[4][4] = 'C';
    chess_board[5][5] = 'F';
    chess_board[5][7] = 'P';
    chess_board[6][1] = 'P';
    chess_board[6][2] = 'P';
    chess_board[6][5] = 'P';

    for (int i = 0; i < chess_size; i++)
        {
            for (int j = 0; j < chess_size; j++)
            {
                printf("%c", chess_board[i][j]);
            }
            printf("\n");
        }
    return 0;
}
