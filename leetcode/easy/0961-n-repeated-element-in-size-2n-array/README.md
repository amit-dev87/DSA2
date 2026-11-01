# N-Repeated Element in Size 2N Array

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` with the following properties:

- nums.length == 2 * n.
- nums contains n + 1 unique values, n of which occur exactly once in the array.
- Exactly one element of nums is repeated n times.

Return  *the element that is repeated* `n` *times*.

 

 **Example 1:** 

```
Input: nums = [1,2,3,3]
Output: 3

```

 **Example 2:** 

```
Input: nums = [2,1,2,5,3,2]
Output: 2

```

 **Example 3:** 

```
Input: nums = [5,1,5,2,5,3,5,4]
Output: 5

```

 

 **Constraints:** 

- 2 <= n <= 5000
- nums.length == 2 * n
- 0 <= nums[i] <= 104
- nums contains n + 1 unique elements and one of them is repeated exactly n times.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 28.3 MB (beats 99.14%)  
**Submitted:** 2026-11-01T13:45:53.384Z  

```cpp
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == nums[(i+1)%nums.size()] || nums[i] == nums[(i+2)%nums.size()]){
                return nums[i];
            }
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/n-repeated-element-in-size-2n-array/)