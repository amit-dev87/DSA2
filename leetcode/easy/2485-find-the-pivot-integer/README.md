# Find the Pivot Integer

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a positive integer `n`, find the  **pivot integer**  `x` such that:

- The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.

Return  *the pivot integer* `x`. If no such integer exists, return `-1`. It is guaranteed that there will be at most one pivot index for the given input.

 

 **Example 1:** 

```
Input: n = 8
Output: 6
Explanation: 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.

```

 **Example 2:** 

```
Input: n = 1
Output: 1
Explanation: 1 is the pivot integer since: 1 = 1.

```

 **Example 3:** 

```
Input: n = 4
Output: -1
Explanation: It can be proved that no such integer exist.

```

 

 **Constraints:** 

- 1 <= n <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.2 MB (beats 39.63%)  
**Submitted:** 2026-10-31T12:16:20.286Z  

```cpp
class Solution {
public:
    int pivotInteger(int n) {
        int total = 0;
        for(int i = 1 ; i <= n ; i++){
            total += i;
        }
        int leftSum = 0;
        for(int i = 1 ; i <= n ; i++){
            int rightSum = total - leftSum - i;
            if(leftSum == rightSum){
                return i;
                break;
            }
            leftSum += i;
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-pivot-integer/)