#include <iostream>
using namespace std;

bool checkSolution(int N) {
    int** board = new int* [N];
    for (int i = 0; i < N; i++) {
        board[i] = new int[N];
        for (int j = 0; j < N; j++)
            board[i][j] = 0; 
    }
    if (solveNQueen(board, N, 0) == false) { 
        cout << "Solution does not exist";
        return false;
    }
    printBoard(board, N);
    return true;
}
