# Majority Element II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array of size `n`, find all elements that appear more than `⌊n / 3⌋` times.

 

 **Example 1:** 

```
Input: nums = [3,2,3]
Output: [3]

```

 **Example 2:** 

```
Input: nums = [1]
Output: [1]

```

 **Example 3:** 

```
Input: nums = [1,2]
Output: [1,2]

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- -109 <= nums[i] <= 109

 

 **Follow up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 41.70%)  
**Memory:** 26.5 MB (beats 23.77%)  
**Submitted:** 2026-10-03T15:45:08.321Z  

```cpp
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second>nums.size()/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/majority-element-ii/)