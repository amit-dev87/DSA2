# k Largest Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  of positive integers and an integer  **k**, Your task is to return k largest elements in decreasing order. 

 **Examples:** 

```
Input: arr[] = [12, 5, 787, 1, 23], k = 2
Output: [787, 23]
Explanation: 1st largest element in the array is 787 and second largest is 23.

```

```
Input: arr[] = [1, 23, 12, 9, 30, 2, 50], k = 3 
Output: [50, 30, 23]
Explanation: Three Largest elements in the array are 50, 30 and 23.

```

```
Input: arr[] = [12, 23], k = 1
Output: [23]
Explanation: 1st Largest element in the array is 23.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-21T02:57:49.816Z  

```cpp
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int>ans;
        if(arr.size() == 1 && k == 1){
            ans.push_back(arr[0]);
            return ans;
        }
        for(int i = arr.size()-1 ; i > arr.size() - k -1 ; i--){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1)