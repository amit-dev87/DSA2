# Power Using Recursion

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

You are given two numbers **n** and **p**. You need to find  **np**.

 **Examples:** 

```
Input: n = 9, p = 9 
Output: 387420489
Explanation: 9 raised to power 9 is 387420489.
```

```
Input: n = 2, p = 9
Output: 512
Explanation: 2 raised to power 9 is 512.
```

 **Constraints:** 
1 ≤ n ≤ 10
0 ≤  p ≤ 9

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T15:50:44.464Z  

```cpp
class Solution {
  public:
    int recursivePower(int n, int p) {
        if(p == 0){
            return 1;
        }
        int ans = n* recursivePower(n,p - 1);
        return ans;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/power-using-recursion/1)