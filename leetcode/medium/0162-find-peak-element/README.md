# Find Peak Element

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

A peak element is an element that is strictly greater than its neighbors.

Given a  **0-indexed**  integer array `nums`, find a peak element, and return its index. If the array contains multiple peaks, return the index to  **any of the peaks**.

You may imagine that `nums[-1] = nums[n] = -∞`. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in `O(log n)` time.

 

 **Example 1:** 

```
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
```

 **Example 2:** 

```
Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
```

 

 **Constraints:** 

- 1 <= nums.length <= 1000
- -231 <= nums[i] <= 231 - 1
- nums[i] != nums[i + 1] for all valid i.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.7 MB (beats 59.04%)  
**Submitted:** 2026-10-07T12:06:46.382Z  

```cpp
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){return 0;};
        if(nums[0]>nums[1]){return 0;};
        if(nums[nums.size()-1]>nums[nums.size()-2]){return nums.size()-1;};
        int i=0,j=1,k=2;
        while(k!=nums.size()){
            if(nums[i]<nums[j] && nums[k]<nums[j]){
                return j;
            }else{
                i++;j++;k++;
            }
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-peak-element/)