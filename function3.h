bool solveNQueen(int** board, int N, int col) {
    if (col >= N) 
        return true;
    for (int i = 0; i < N; i++) { 
        if (isValid(board, i, col, N)) {
            board[i][col] = 1; 
            if (solveNQueen(board, N, col + 1)) 
                return true;
            board[i][col] = 0; 
        }
    }
    return false; 
}
