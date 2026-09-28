# Pair With Difference

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array,  **arr[]**  and an integer  **x**, return true if there exists a pair of elements in the array whose absolute difference is  **x**, otherwise, return false.

 **Examples:** 

```
Input: arr[] = [5, 20, 3, 2, 5, 80], x = 78
Output: true
Explanation: Pair (2, 80) have an absolute difference of 78.
```

```
Input: arr[] = [90, 70, 20, 80, 50], x = 45
Output: false
Explanation: There is no pair with absolute difference of 45.

```

```
Input: arr[] = [1], x = 1
Output: false
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-28T04:49:51.519Z  

```cpp

class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0,j=1;
        while(j<n){
            int diff=arr[j]-arr[i];
            if(diff==x){
                return true;
            }else if(diff<x){
                j++;
            }else{
                i++;
            }
            if(i==j){
                j++;
            }
        }
        return false;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1)