# Intersection of Two arrays with Duplicate Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integer arrays a[] and b[], you have to find the intersection of the two arrays.  **Intersection**  of two arrays is said to be elements that are common in both the arrays. The intersection should not have  **duplicate**  elements and the result may contain elements in  **any order**.

 **Note:** The driver code will  **sort**  the resulting array in increasing order before printing.

 **Examples:** 

```
Input: a[] = [1, 2, 1, 3, 1], b[] = [3, 1, 3, 4, 1]
Output: [1, 3]
Explanation: 1 and 3 are the only common elements and we need to print only one occurrence of common elements.

```

```
Input: a[] = [1, 1, 1], b[] = [1, 1, 1, 1, 1]
Output: [1]
Explanation: 1 is the only common element present in both the arrays.

```

```
Input: a[] = [1, 2, 3], b[] = [4, 5, 6]
Output: []
Explanation: No common element in both the arrays.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T15:23:18.276Z  

```cpp
class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        set<int> st;
        vector<int> ans;

        for(int i : a) {
            st.insert(i);
        }

        for(int i : b) {
            if(st.find(i) != st.end()) {
                ans.push_back(i);
                st.erase(i);
            }
        }

        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays-with-duplicate-elements/1)