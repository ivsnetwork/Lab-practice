#include <simplecpp>

bool checkRow(char board[9][9], int row) {
    
}

bool checkCol(char board[9][9], int col) {
    
}

bool checkBox(char board[9][9], int startRow, int startCol) {
    
}

main_program {
    char board[9][9];

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            cin >> board[i][j];

    for (int i = 0; i < 9; i++) {
        if (!checkRow(board, i) || !checkCol(board, i)) {
            cout << "false\n";
            return 0;
        }
    }

    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            if (!checkBox(board, i, j)) {
                cout << "false\n";
                return 0;
            }
        }
    }

    cout << "true\n";
}