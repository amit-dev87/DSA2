# Duplicate Zeros

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a fixed-length integer array `arr`, duplicate each occurrence of zero, shifting the remaining elements to the right.

 **Note**  that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

 

Original
C++
 **Example 1:** 

```
Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]

```

 **Example 2:** 

```
Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]

```

 

 **Constraints:** 

- 1 <= arr.length <= 104
- 0 <= arr[i] <= 9

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 28.03%)  
**Memory:** 13.9 MB (beats 87.24%)  
**Submitted:** 2026-11-24T12:26:59.793Z  

```cpp
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        for(int i = 0 ; i < n; i++){
            if(arr[i] == 0){
                arr.insert(arr.begin() + i + 1 , 0);
                i++;
            }
        }
        arr.resize(n);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/duplicate-zeros/)