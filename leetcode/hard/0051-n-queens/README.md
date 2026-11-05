# N-Queens

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

The  **n-queens**  puzzle is the problem of placing `n` queens on an `n x n` chessboard such that no two queens attack each other.

Given an integer `n`, return  *all distinct solutions to the  **n-queens puzzle***. You may return the answer in  **any order**.

Each solution contains a distinct board configuration of the n-queens' placement, where `'Q'` and `'.'` both indicate a queen and an empty space, respectively.

 

 **Example 1:** 

```
Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above

```

 **Example 2:** 

```
Input: n = 1
Output: [["Q"]]

```

 

 **Constraints:** 

- 1 <= n <= 9

## Solution

**Language:** C++  
**Runtime:** 5 ms (beats 20.32%)  
**Memory:** 10.2 MB (beats 76.38%)  
**Submitted:** 2026-11-05T02:48:08.304Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/n-queens/)