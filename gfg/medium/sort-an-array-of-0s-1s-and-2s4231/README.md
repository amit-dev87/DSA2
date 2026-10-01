# Sort 0s, 1s and 2s

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  containing only 0s, 1s, and 2s **.**  Sort the array in ascending order. 

 **Examples:** 

```
Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
```

```
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
```

 **Follow up:**  Could you come up with a one-pass algorithm using only constant extra space?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T16:22:46.620Z  

```cpp
class Solution {
  public:
    void sort012(vector<int>& arr) {
        int l=0,r=arr.size()-1,p=0;
        while(p<=r){
            if(arr[p]==2){
                swap(arr[p],arr[r]);
                r--;
            }else if(arr[p]==0){
                swap(arr[p],arr[l]);
                p++;
                l++;
            }else{
                p++;
            }
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1)