class Solution {
public:
    bool isSafe(int row, int col, vector<string>& board, int n) {
        for(int i = 0; i < row; i++) {
            if(board[i][col] == 'Q') return false;
        }
        for(int i = 0; i < col; i++) {
            if(board[row][i] == 'Q') return false;
        }
        for(int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if(board[i][j] == 'Q') return false;
        }
        for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if(board[i][j] == 'Q') return false;
            }
        return true;
        }

    void Nque(int row, vector<string>& board, vector<vector<string>>& ans, int n){
        if(row == n){
            ans.push_back(board);
            return ;
        }
        for(int col = 0; col < n; col++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                Nque(row + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        Nque(0, board, ans, n);
        return ans;

    }
};