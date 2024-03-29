bool isValid(int** board, int row, int col, int N) {
    for (int i = 0; i < col; i++) 
        if (board[row][i])
            return false;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j]) 
            return false;
    for (int i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j]) 
            return false;
    return true;
}
