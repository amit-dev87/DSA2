# Smallest Positive Missing

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an integer array  **arr[]**. Your task is to find the smallest positive number missing from the array.

 **Note:**  Positive number starts from 1. The array can have negative integers too.

 **Examples:** 

```
Input: arr[] = [2, -3, 4, 1, 1, 7]
Output: 3
Explanation: Smallest positive missing number is 3.

```

```
Input: arr[] = [5, 3, 2, 5, 1]
Output: 4
Explanation: Smallest positive missing number is 4.

```

```
Input: arr[] = [-8, 0, -1, -4, -3]
Output: 1
Explanation: Smallest positive missing number is 1.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T12:17:21.228Z  

```cpp
class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int res=1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]==res){
                res++;
            }else if(arr[i]>res){
                break;
            }
        }
        return res;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1)