# Rearrange Array Alternately

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of non-negative integers. Your task is to rearrange the array elements alternatively i.e. first element should be the max value, the second should be the min value, the third should be the second max, the fourth should be the second min, and so on.

 **Note:** Modify the original array itself. You do not have to return anything.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, 4, 5, 6]
Output: [6, 1, 5, 2, 4, 3]
Explanation: Max element = 6, min = 1, second max = 5, second min = 2, and so on... The modified array is: [6, 1, 5, 2, 4, 3]
```

```
Input: arr[]= [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110]
Output: [110, 10, 100, 20, 90, 30, 80, 40, 70, 50, 60]
Explanation: Max element = 110, min = 10, second max = 100, second min = 20, and so on... Modified array is : [110, 10, 100, 20, 90, 30, 80, 40, 70, 50, 60]

```

```
Input: arr[]= [1]
Output: [1]
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-22T15:07:35.169Z  

```cpp
class Solution {
  public:
    void rearrange(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        vector<int>ans;
        int i = 0  , j = arr.size() - 1;
        while(i < j){
            ans.push_back(arr[j]);
            j--;
            ans.push_back(arr[i]);
            i++;
        }
        if(arr.size() % 2 != 0){
            ans.push_back(arr[i]);
        }
        arr = ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1)