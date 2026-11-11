# Odd or Even

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer  **n**, find if it is odd or even. Return true if the number is even else false.

 **Examples:** 

```
Input: n = 15
Output: false
Explanation: The number is not divisible by 2, Odd number.
```

```
Input: n = 44
Output: true
Explanation: The number is divisible by 2, Even number.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-11T02:42:34.566Z  

```cpp
class Solution {
  public:
    bool isEven(int n) {
        if(n & 1){
            return false;
        }else{
            return true;
        }
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/odd-or-even3618/1)