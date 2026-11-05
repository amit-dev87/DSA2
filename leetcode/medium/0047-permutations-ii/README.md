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
**Runtime:** 85 ms (beats 5.01%)  
**Memory:** 25 MB (beats 5.01%)  
**Submitted:** 2026-11-05T02:16:13.650Z  

```cpp
class Solution {
public:
    void getPerms(vector<int>&nums , int idx , set<vector<int>>&st){
        if(idx == nums.size()) st.insert({nums});
        for(int i = idx ; i < nums.size() ; i++){
            swap(nums[idx] , nums[i]);
            getPerms(nums,idx + 1 , st);
            swap(nums[idx] , nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>st;
        vector<vector<int>>ans;
        getPerms(nums , 0 , st);
        for(auto i : st){
            ans.push_back(i);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations-ii/)