# Sort a stack

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a stack of integers  **st[]**. Sort the stack in ascending order (smallest element at the bottom and largest at the top).

 **Examples:** 

```
Input: st[] = [41, 3, 32, 2, 11]
Output: [41, 32, 11, 3, 2]
Explanation: After sorting, the smallest element (2) is at the bottom and the largest element (41) is at the top.

```

```
Input: st[] = [3, 2, 1]
Output: [3, 2, 1]
Explanation: The stack is already sorted in ascending order.

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T02:24:36.330Z  

```cpp
class Solution {
  public:
    void sortStack(stack<int> &st) {
        vector<int>a;
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
        }
        sort(a.begin(),a.end());
        for(int i : a){
            st.push(i);
        }
        
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/sort-a-stack/1)