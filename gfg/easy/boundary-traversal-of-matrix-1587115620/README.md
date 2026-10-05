# Matrix Boundary Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a matrix  **mat[][]**. Return the boundary traversal on the matrix in a clockwise manner starting from the first row of the matrix.

 **Examples:** 

```
Input: mat[][] = [[1, 2, 3, 4],
                [5, 6, 7, 8],
                [9, 10, 11, 12],
                [13, 14, 15,16]]
Output: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5]
Explanation: The boundary traversal is: [1, 2, 3, 4, 8, 12, 16, 15, 14, 13, 9, 5]

```

```
Input:mat[][] = [[12, 11, 10, 9],
               [8, 7, 6, 5],
               [4, 3, 2, 1]]
Output: [12, 11, 10, 9, 5, 1, 2, 3, 4, 8]
Explanation: The boundary traversal is: [12, 11, 10, 9, 5, 1, 2, 3, 4, 8]
```

```
Input:mat[][] = [[12, 11],
                [4, 3]] 
Output: [12, 11, 3, 4]
Explanation: The boundary traversal is: [12, 11, 3, 4]

```

 **Constraints:** 
1 ≤ mat.size()≤ 1000
1 ≤ mat[0].size() ≤ 1000
0 ≤ mat[i][j] ≤ 1000

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T15:56:09.212Z  

```cpp
class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        vector<int>ans;
        int i=mat.size(),j=mat[0].size();
        int left=0,right=j-1;
        int top=0,bottom=i-1;
        for(int n = 0 ; n <= right ; n++){
            ans.push_back(mat[top][n]);
        }
        top++;
        for(int n = top; n <= bottom ; n++){
            ans.push_back(mat[n][right]);
        }
        right--;

        if(top<=bottom){
            for(int n = right ; n >= left ; n--){
            ans.push_back(mat[bottom][n]);
        }
        bottom--;
        }
        if(left<=right){
            for(int n = bottom ; n >= top ; n--){
            ans.push_back(mat[n][left]);
        }
        left++;
        }

        return ans;
    }
};

        



```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1)