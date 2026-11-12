# Square Root

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer  **n,**  find the square root of n. If n is not a perfect square, then return the floor value.

Floor value of any number is the greatest Integer which is less than or equal to that number.

 **Examples:** 

```
Input: n = 4
Output: 2
Explanation: Since, 4 is a perfect square, so its square root is 2.

```

```
Input: n = 11
Output: 3
Explanation: Since, 11 is not a perfect square, floor of square root of 11 is 3.
```

```
Input: n = 1
Output: 1
Explanation: 1 is a perfect square, so its square root is 1.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T03:09:34.172Z  

```cpp
class Solution {
  public:
    int floorSqrt(int n) {
    int i = 1 , j = n;
    int ans = 0;
    while(i <= j){
        int mid = i + ((j-i)/2);
        if((long long)mid * mid > n){
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

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/square-root/1)