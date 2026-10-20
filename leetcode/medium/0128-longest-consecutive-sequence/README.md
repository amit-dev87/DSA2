# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers `nums`, return  *the length of the longest consecutive elements sequence.* 

You must write an algorithm that runs in `O(n)` time.

 

 **Example 1:** 

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

 **Example 2:** 

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

 **Example 3:** 

```
Input: nums = [1,0,1,2]
Output: 3

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 156 ms (beats 7.05%)  
**Memory:** 95.7 MB (beats 5.11%)  
**Submitted:** 2026-10-20T04:27:38.508Z  

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        set<int>st;
        vector<int>ans;
        for(int num : nums){
            st.insert(num);
        }

        for(auto i : st){
            ans.push_back(i);
        }

        int count = 1;
        int m = 1;

        for(int i = 1 ; i < ans.size() ; i++){
            if(ans[i-1] + 1 == ans[i]){
                count++;
            }else{
                count = 1;
            }
            m = max(m , count);
        }
        return m;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)