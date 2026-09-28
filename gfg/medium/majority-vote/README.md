# Majority Element - More Than n/3

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr**  **[]**  consisting of  **n**  integers, find all the array elements which occurs more than  **floor(n/3)**  times. Return the resulting array in strictly increasing order. If no such elements exist, return an empty array.

 **Examples:** 

```
Input: arr[] = [2, 2, 3, 1, 3, 2, 1, 1]
Output: [1, 2]
Explanation: The frequency of 1 and 2 is 3, which is more than floor n/3 (8/3 = 2).
```

```
Input:  arr[] = [-5, 3, -5]
Output: [-5]
Explanation: The frequency of -5 is 2, which is more than floor n/3 (3/3 = 1).

```

```
Input:  arr[] = [3, 2, 2, 4, 1, 4]
Output: []
Explanation: There is no majority element.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T12:31:34.062Z  

```cpp
class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[arr[i]]>n/3){
                ans.push_back(arr[i]);
                m[arr[i]]=0;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/majority-vote/1)