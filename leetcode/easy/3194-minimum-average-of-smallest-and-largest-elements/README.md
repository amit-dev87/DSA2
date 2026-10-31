# Minimum Average of Smallest and Largest Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You have an array of floating point numbers `averages` which is initially empty. You are given an array `nums` of `n` integers where `n` is even.

You repeat the following procedure `n / 2` times:

- Remove the smallest element, minElement, and the largest element maxElement, from nums.
- Add (minElement + maxElement) / 2 to averages.

Return the  **minimum**  element in `averages`.

 

 **Example 1:** 

 **Input:**  nums = [7,8,3,4,15,13,4,1]

 **Output:**  5.5

 **Explanation:** 

step	nums	averages
0	[7,8,3,4,15,13,4,1]	[]
1	[7,8,3,4,13,4]	[8]
2	[7,8,4,4]	[8,8]
3	[7,4]	[8,8,6]
4	[]	[8,8,6,5.5]
The smallest element of averages, 5.5, is returned.

 **Example 2:** 

 **Input:**  nums = [1,9,8,3,10,5]

 **Output:**  5.5

 **Explanation:** 

step	nums	averages
0	[1,9,8,3,10,5]	[]
1	[9,8,3,5]	[5.5]
2	[8,5]	[5.5,6]
3	[]	[5.5,6,6.5]

 **Example 3:** 

 **Input:**  nums = [1,2,3,7,8,9]

 **Output:**  5.0

 **Explanation:** 

step	nums	averages
0	[1,2,3,7,8,9]	[]
1	[2,3,7,8]	[5]
2	[3,7]	[5,5]
3	[]	[5,5,5]

 

 **Constraints:** 

- 2 <= n == nums.length <= 50
- n is even.
- 1 <= nums[i] <= 50

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 26.29%)  
**Memory:** 25.5 MB (beats 78.31%)  
**Submitted:** 2026-10-31T12:25:54.288Z  

```cpp
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0 , j = nums.size() - 1;
        double m = 60;
        while(i<=j){
            double avg = (nums[i] + nums[j])/2.0;
            m = min(m , avg);
            i++;j--;
        }
        return m;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-average-of-smallest-and-largest-elements/)