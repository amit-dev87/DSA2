# Single Number III

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums`, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in  **any order**.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

 

 **Example 1:** 

```
Input: nums = [1,2,1,3,2,5]
Output: [3,5]
Explanation:  [5, 3] is also a valid answer.

```

 **Example 2:** 

```
Input: nums = [-1,0]
Output: [-1,0]

```

 **Example 3:** 

```
Input: nums = [0,1]
Output: [1,0]

```

 

 **Constraints:** 

- 2 <= nums.length <= 3 * 104
- -231 <= nums[i] <= 231 - 1
- Each integer in nums will appear twice, only two integers will appear once.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.9 MB (beats 80.58%)  
**Submitted:** 2026-10-12T03:37:06.789Z  

```cpp
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    vector<int>ans;
    long long c = 0;
    for(int i : nums){
        c^=i;
    }
    int bit = c & (-c);
    int a = 0 , b = 0;
    for(int num : nums){
        if(num & bit){
            a^=num;
        }else{
            b^=num;
        }
    }
    return {a , b};
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-number-iii/)