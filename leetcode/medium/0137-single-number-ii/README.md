# Single Number II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` where every element appears  **three times**  except for one, which appears  **exactly once**.  *Find the single element and return it*.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Original
C++
 **Example 1:** 

```
Input: nums = [2,2,3,2]
Output: 3

```

 **Example 2:** 

```
Input: nums = [0,1,0,1,0,1,99]
Output: 99

```

 

 **Constraints:** 

- 1 <= nums.length <= 3 * 104
- -231 <= nums[i] <= 231 - 1
- Each element in nums appears exactly three times except for one element which appears once.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 24.72%)  
**Memory:** 17.4 MB (beats 8.13%)  
**Submitted:** 2026-11-19T09:01:57.956Z  

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int>freq;
        int count=0;
        for(int num : nums){
            freq[num]++;
        }
        for(int num : nums){
            if(freq[num] == 1){
                return num;
            }
        }
        return{};
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-number-ii/)