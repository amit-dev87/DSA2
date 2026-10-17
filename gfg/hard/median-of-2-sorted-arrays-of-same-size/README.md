# Median of 2 Sorted Arrays of Same Size

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two sorted arrays  **a[]**  and  **b[]** of equal size, find and return the  **median** of the combined array after merging them into a single sorted array.

 **Examples:** 

```
Input: a[] = [-5, 3, 6, 12, 15], b[] = [-12, -10, -6, -3, 4]
Output: 0
Explanation: The merged array is [-12, -10, -6, -5, -3, 3, 4, 6, 12, 15]. So the median of the merged array is (-3 + 3) / 2 = 0.
```

```
Input: a[] = [2, 3, 5, 7], b[] = [10, 12, 14, 16]
Output: 8.5
Explanation: The merged array is [2, 3, 5, 7, 10, 12, 14, 16]. So the median of the merged array is (7 + 10) / 2 = 8.5.
```

```
Input: a[] = [-5], b[] = [-6]
Output: -5.5
Explanation: The merged array is [-6, -5]. So the median of the merged array is (-6 + -5) / 2 = -5.5.

```

 **Constraints:** 
1 ≤ a.size(), b.size() ≤ 106
-106 ≤ a[i], b[i] ≤ 106

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-17T17:54:30.702Z  

```cpp
class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<int>ans;
        int i = 0 , j = 0;
        while(i != n && j != n){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while( i < n){
            ans.push_back(a[i]);
            i++;
        }
        while(j < n){
            ans.push_back(b[j]);
            j++;
        }
        int m = ans.size();
        if (m % 2 == 0){
            return (ans[m/2] + ans[(m-1)/2])/2.0;
        }else{
            return ans[m/2];
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-same-size/1)