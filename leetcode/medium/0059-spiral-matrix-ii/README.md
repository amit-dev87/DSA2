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
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.4 MB (beats 34.17%)  
**Submitted:** 2026-11-13T04:14:42.288Z  

```cpp
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n, 0));
        int a  = 1;
        int   left = 0 , right  = n - 1 , top = 0 , bottom = n - 1;
        while(top <= bottom && left <= right){
            // left to right filling element
            for(int i = left ; i <= right ; i++){
                ans[top][i] = a++;
            }
            top++;
            //top to bottom filling element
            for(int i = top ; i <= bottom ; i++){
                ans[i][right] = a++;
            }
            right--;
            // right to left filling element
            if(top <= bottom){
                for(int i = right ; i >= left ; i--){
                    ans[bottom][i] = a++;
                }
                bottom--;
            }
            // left to right filling element
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