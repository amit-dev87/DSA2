# Median of 2 Sorted Arrays of Different Sizes

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two sorted arrays  **a[]**  and  **b[]**, find and return the  **median** of the combined array after  **merging**  them into a single sorted array.

 **Examples:** 

```
Input: a[] = [3, 5, 6, 12, 15], b[] = [3, 4, 6, 10, 10, 12]
Output: 6
Explanation: The merged array is [3, 3, 4, 5, 6, 6, 10, 10, 12, 12, 15]. So the median of the merged array is 6.
```

```
Input: a[] = [2, 3, 5, 8], b[] = [10, 12, 14, 16, 18, 20]
Output: 11
Explanation: The merged array is [2, 3, 5, 8, 10, 12, 14, 16, 18, 20]. So the median of the merged array is (10 + 12) / 2 = 11.
```

```
Input: a[] = [], b[] = [2, 4, 5, 6]
Output: 4.5
Explanation: The merged array is [2, 4, 5, 6]. So the median of the merged array is (4 + 5) / 2 = 4.5.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-22T16:19:26.875Z  

```cpp
class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int n = a.size() , m = b.size();
        int i = 0 , j = 0;
        vector<int>ans;
        while(i < n  && j < m){
            if(a[i] <= b[j]){
                ans.push_back(a[i]);
                i++;
            }else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i < n){
            ans.push_back(a[i]);
            i++;
        }
        while(j < m){
            ans.push_back(b[j]);
            j++;
        }
        if((n + m) % 2 != 0){
            return ans[(n+m)/2];
        }else{
            return (ans[((n+m)/2) - 1] + ans[((n+m)/2)]) / 2.0;
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1)