#include <iostream>
using namespace std;

const int SIZE =3;

void theBoard(char board[SIZE][SIZE]) {
    cout << "\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << "\n";
        if (i < SIZE - 1) cout << "--+---+--\n";
    }
    cout << "\n";
}

char checkWinner(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        if (board[i][0] != ' ' &&
            board[i][0] == board[i][1] &&
            board[i][1] == board[i][2]) return board[i][0];
        if (board[0][i] != ' ' &&
            board[0][i] == board[1][i] &&
            board[1][i] == board[2][i]) return board[0][i];
    }

    if (board[0][0] != ' ' &&
        board[0][0] == board[1][1] &&
        board[1][1] == board[2][2]) return board[0][0];

    if (board[0][2] != ' ' &&
        board[0][2] == board[1][1] &&
        board[1][1] == board[2][0]) return board[0][2];

    return ' '; 
}


bool isDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (board[i][j] == ' ') return false;
    return true;
}

int main() {
    char board[SIZE][SIZE] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char currentPlayer = 'X';
    int row, col;

    cout << "Welcome to Tic-Tac-Toe!\n";
    theBoard(board);

    while (true) {
        cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
        cin >> row >> col;

        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {
            cout << "Invalid position. Try again.\n";
            continue;
        }

        char* cell = &board[row][col];

        if (*cell != ' ') {
            cout << "Cell already taken. Try again.\n";
            continue;
        }

        *cell = currentPlayer;

        theBoard(board);

        char winner = checkWinner(board);
        if (winner != ' ') {
            cout << "Player " << winner << " wins!\n";
            break;
        }

        if (isDraw(board)) {
            cout << "It's a draw!\n";
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}

