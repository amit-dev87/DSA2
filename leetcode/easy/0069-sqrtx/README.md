# Sqrt(x)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a non-negative integer `x`, return  *the square root of* `x` *rounded down to the nearest integer*. The returned integer should be  **non-negative**  as well.

You  **must not use**  any built-in exponent function or operator.

- For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

 

Original
C++
 **Example 1:** 

```
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

```

 **Example 2:** 

```
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

```

 

 **Constraints:** 

- 0 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 32.89%)  
**Memory:** 8.4 MB (beats 93.79%)  
**Submitted:** 2026-11-12T02:21:02.832Z  

```cpp
class Solution {
public:
    int mySqrt(int x) {
    int i = 1 , j = x;
    int ans = 0;
    while(i <= j){
        int mid = i + ((j-i)/2);
        if((long long)mid * mid == x){
            return mid;
        }else if((long long)mid * mid > x){
            j = mid -1;
        }else{
            ans = mid;
            i = mid + 1;
        }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sqrtx/)