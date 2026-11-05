# Permutations II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a collection of numbers, `nums`, that might contain duplicates, return  *all possible unique permutations  **in any order**.* 

 

 **Example 1:** 

```
Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]

```

 **Example 2:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 8
- -10 <= nums[i] <= 10

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 76.29%)  
**Memory:** 11.2 MB (beats 98.91%)  
**Submitted:** 2026-11-05T02:19:27.148Z  

```cpp
class Solution {
public:

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        do{
            ans.push_back(nums);  
        }while(next_permutation(nums.begin(),nums.end()));
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations-ii/)