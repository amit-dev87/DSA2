# Sort Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an unsorted array  **arr[]**  of numbers, sort the array in ascending order.

 **Examples:** 

```
Input: arr[] = [1, 5, 3, 2]
Output: [1, 2, 3, 5]
Explanation: After sorting, array will be like [1, 2, 3, 5].
```

```
Input: arr[] = [3, 1]
Output: [1, 3]
Explanation: After sorting, array will be like [1, 3].
```

```
Input: arr[] = [1, 2, 3]
Output: [1, 2, 3]
Explanation: It's already sorted in ascending order.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T11:59:35.998Z  

```cpp
class Solution {
  public:
    void sortArr(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sort-the-array0055/1)