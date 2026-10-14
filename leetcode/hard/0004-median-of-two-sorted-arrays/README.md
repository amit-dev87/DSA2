# Median of Two Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return  **the median**  of the two sorted arrays.

The overall run time complexity should be `O(log (m+n))`.

 

 **Example 1:** 

```
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

```

 **Example 2:** 

```
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

```

 

 **Constraints:** 

- nums1.length == m
- nums2.length == n
- 0 <= m <= 1000
- 0 <= n <= 1000
- 1 <= m + n <= 2000
- -106 <= nums1[i], nums2[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 18.33%)  
**Memory:** 95.6 MB (beats 31.37%)  
**Submitted:** 2026-10-14T11:20:58.811Z  

```cpp
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       for(int val:nums2){
        nums1.push_back(val);
       }
       sort(nums1.begin(),nums1.end());
       int size=nums1.size();
       if(size%2==0){
        return (nums1[size/2 - 1] + nums1[size/2]) / 2.0;
       }else{
        return nums1[size/2];
       }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/median-of-two-sorted-arrays/)