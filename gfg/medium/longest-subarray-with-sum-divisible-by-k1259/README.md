# Longest Subarray Sum Divisible by K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  and a positive integer  **k**, find the length of the longest subarray with the sum of the elements divisible by k.

 **Note:** If there is no subarray with sum divisible by k, then return 0.

 **Examples :** 

```
Input: arr[] = [2, 7, 6, 1, 4, 5], k = 3
Output: 4
Explanation: The subarray [7, 6, 1, 4] has sum = 18, which is divisible by 3.
```

```
Input: arr[] = [-2, 2, -5, 12, -11, -1, 7], k = 3
Output: 5
Explanation: The subarray [2, -5, 12, -11, -1] has sum = -3, which is divisible by 3.

```

```
Input: arr[] = [1, 2, -2], k = 2
Output: 2
Explanation: The subarray is [2, -2] has sum = 0, which is divisible by 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-22T03:33:31.874Z  

```cpp
class Solution {
  public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;

        long long sum = 0;
        int ans = 0;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];

            int rem = ((sum % k) + k) % k;

            if (mp.find(rem) != mp.end()) {
                ans = max(ans, i - mp[rem]);
            } else {
                mp[rem] = i;
            }
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1)