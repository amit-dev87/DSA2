# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 32.23%)  
**Memory:** 8.7 MB (beats 23.61%)  
**Submitted:** 2026-11-02T03:17:37.393Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        double rev,rem=0;
        while(x!=0){
            rem=x%10;
            rev= 10*rev+rem;
            x/=10;
        }
        if(rev>INT_MAX||rev<INT_MIN){return 0;}
        return (int)rev;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)