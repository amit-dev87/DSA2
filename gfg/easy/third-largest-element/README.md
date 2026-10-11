# Third Largest

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array,  **arr[]**  of positive integers. Find the third largest element in it. Return  **-1**  if the third largest element is not found.

 **Examples:** 

```
Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The third largest element in the array [2, 4, 1, 3, 5] is 3.
```

```
Input: arr[] = [10, 2]
Output: -1
Explanation: There are less than three elements in the array, so the third largest element cannot be determined.

```

```
Input: arr[] = [5, 5, 5]
Output: 5
Explanation: In the array [5, 5, 5], the third largest element can be considered 5, as there are no other distinct elements.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T15:52:07.990Z  

```cpp
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n>=3){
            return arr[n-3];
        }else{
            return -1;
        }
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/third-largest-element/1)