# Matrix Snake Pattern

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a matrix **mat[][]** of size **n x n**. Print the elements of the matrix in the snake like pattern depicted below.

 **Examples :** 

```
Input: n = 3, mat[][] = [[45, 48, 54], [21, 89, 87], [70, 78, 15]]
Output: [45, 48, 54, 87, 89, 21, 70, 78, 15] 
Explanation: Printing it in snake pattern will lead to the output as [45, 48, 54, 87, 89, 21, 70, 78, 15.
```

```
Input: n = 2, mat[][] = [[1, 2], [3, 4]]
Output: [1, 2, 4, 3] 
Explanation: Printing it in snake pattern will give output as [1, 2, 4, 3].
```

 **Constraints:** 
1 <= n <= 103
1 <= mat[i][j] <= 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T03:51:54.083Z  

```cpp
class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > arr) {
        int n=arr.size(),m=arr[0].size();
        int top=0,bottom=n-1;
        int left=0,right=m-1;
        vector<int>ans;
        while(top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(arr[top][i]);
            }
                top++;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(arr[top][i]);
                }
            top++;
            }
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1)