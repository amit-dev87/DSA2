# Highest and Lowest Frequencies

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given an array, the task is to find the difference between the highest occurrence and lowest occurrence of any numbers in an array. If only one type of element is present in the array return 0

 **Examples:** 

```
Input: arr[] = [1, 2, 2]
Output: 1
Explanation:  Lowest occurring element (1) occurs once. Highest occurring element (2) occurs 2 times
```

```
Input: arr[] = [7, 8, 4, 5, 4, 1, 1, 7, 7, 2, 5]
Output: 2
Explanation : Lowest occurring element (2) occurs once. Highest occurring element (7) occurs 3 times
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-15T04:20:01.386Z  

```cpp

class Solution {
  public:
    int findDiff(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        if(mp.size() == 1) return 0;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(auto it : mp) {
            maxi = max(maxi, it.second);
            mini = min(mini, it.second);
        }

        return maxi - mini;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/difference-between-highest-and-lowest-occurrence4613/1)