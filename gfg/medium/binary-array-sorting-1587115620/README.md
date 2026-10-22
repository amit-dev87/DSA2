# Binary Array Sorting

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a binary array  **arr[]**, where each element is either  **0** or  **1**. Your task is to rearrange the array in increasing order in place (without using extra space). You do not need to return anything; simply modify the input array.

 **Examples:** 

```
Input: arr[] = [1, 0, 1, 1, 0]
Output: [0, 0, 1, 1, 1]
Explanation: After arranging the elements in increasing order, elements will be as 0 0 1 1 1.
```

```
Input: arr[] = [1, 0, 1, 1, 1, 1, 1, 0, 0, 0]
Output: [0, 0, 0, 0, 1, 1, 1, 1, 1, 1]
Explanation: After arranging the elements in increasing order, elements will be 0 0 0 0 1 1 1 1 1 1.
```

```
Input: arr[] = [1, 1, 1, 1]
Output: [1, 1, 1, 1]
Explanation: Since the array already contains only 1s, no change is needed.
```

 **Constraints:** 
1 ≤ arr.size() ≤ 106
for all valid indices  **i**.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-22T13:40:39.767Z  

```cpp
class Solution {
  public:
    void binSort(vector<int> &arr) {
        int i = 0 ;
        int j = arr.size() - 1;
        while(j>=i){
            if(arr[i] == 1){
                swap(arr[i],arr[j]);
                j--;
            }else if(arr[j] == 0){
                swap(arr[j],arr[i]);
                i++;
            }else{
                i++;
                j--;
            }
        }
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1)