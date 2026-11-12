# Unique Number I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a  **unsorted** array  **arr[]**  of positive integers having all the numbers occurring exactly  **twice**, except for one number which will occur only  **once**. Find the number occurring only once.

 **Examples :** 

```
Input: arr[] = [1, 2, 1, 5, 5]
Output: 2
Explanation: Since 2 occurs once, while other numbers occur twice, 2 is the answer.
```

```
Input: arr[] = [2, 30, 2, 15, 20, 30, 15]
Output: 20
Explanation: Since 20 occurs once, while other numbers occur twice, 20 is the answer.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T06:49:02.559Z  

```cpp
class Solution {
  public:
    int findUnique(vector<int> &arr) {
        int ans = 0;
        for(int i  : arr){
            ans ^=i;
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-unique-number/1)