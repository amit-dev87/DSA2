# Pascal's Triangle II

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `rowIndex`, return the `rowIndexth` (**0-indexed**) row of the  **Pascal's triangle**.

In  **Pascal's triangle**, each number is the sum of the two numbers directly above it as shown:

 

 **Example 1:** 

```
Input: rowIndex = 3
Output: [1,3,3,1]

```

 **Example 2:** 

```
Input: rowIndex = 0
Output: [1]

```

 **Example 3:** 

```
Input: rowIndex = 1
Output: [1,1]

```

 

 **Constraints:** 

- 0 <= rowIndex <= 33

 

 **Follow up:**  Could you optimize your algorithm to use only `O(rowIndex)` extra space?

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8 MB  
**Submitted:** 2026-09-30T13:08:50.649Z  

```cpp
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int>res;
        res.push_back(1);
        for(int col=0;col<rowIndex;col++){
            ans*=rowIndex-col;
            ans/=col+1;
            res.push_back(ans);
        }
        return res;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/pascals-triangle-ii/)