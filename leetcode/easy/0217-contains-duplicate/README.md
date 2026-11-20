# Contains Duplicate

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, return `true` if any value appears  **at least twice**  in the array, and return `false` if every element is distinct.

 

Original
C++
 **Example 1:** 

 **Input:**  nums = [1,2,3,1]

 **Output:**  true

 **Explanation:** 

The element 1 occurs at the indices 0 and 3.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  false

 **Explanation:** 

All elements are distinct.

 **Example 3:** 

 **Input:**  nums = [1,1,1,3,3,4,3,2,4,2]

 **Output:**  true

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 25 ms (beats 91.90%)  
**Memory:** 84 MB (beats 78.65%)  
**Submitted:** 2026-11-20T17:32:14.766Z  

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0 , j = 1;
        while(j < nums.size()){
            if(nums[i] == nums[j]){
                return true;
            }else{
                i++;
                j++;
            }
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/contains-duplicate/)