# Next Permutation

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers  **arr[]**  representing a permutation, implement the next permutation that rearranges the numbers into the lexicographically smallest greater (or next) permutation.

If no next permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 

 **Examples:** 

```
Input: arr[] = [2, 4, 1, 7, 5, 0]
Output: [2, 4, 5, 0, 1, 7]
Explanation: The next permutation of the given array is [2, 4, 5, 0, 1, 7].
```

```
Input: arr[] = [3, 2, 1]
Output: [1, 2, 3]
Explanation: As arr[] is the last permutation, the next permutation is the lowest one.

```

```
Input: arr[] = [3, 4, 2, 5, 1]
Output: [3, 4, 5, 1, 2]
Explanation: The next permutation of the given array is [3, 4, 5, 1, 2].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-09T04:57:17.938Z  

```cpp
class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        next_permutation(arr.begin(),arr.end());
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/next-permutation5226/1)