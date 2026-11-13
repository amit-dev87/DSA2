# Spiral Matrix II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a positive integer `n`, generate an `n x n` `matrix` filled with elements from `1` to `n2` in spiral order.

 

Original
C++
 **Example 1:** 

```
Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]

```

 **Example 2:** 

```
Input: n = 1
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= n <= 20

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 18.32%)  
**Memory:** 9.5 MB (beats 34.17%)  
**Submitted:** 2026-11-13T04:13:02.718Z  

```cpp
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n, 0));
        int a  = 1;
        int   left = 0 , right  = n - 1 , top = 0 , bottom = n - 1;
        while(top <= bottom && left <= right){
            for(int i = left ; i <= right ; i++){
                ans[top][i] = a++;
            }
            top++;
            for(int i = top ; i <= bottom ; i++){
                ans[i][right] = a++;
            }
            right--;
            if(top <= bottom){
                for(int i = right ; i >= left ; i--){
                    ans[bottom][i] = a++;
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom ; i >= top ;i--){
                    ans[i][left] = a++;
                }
                left++;
            }                         
        }
    return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/spiral-matrix-ii/)