# Middle of Stack

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a stack **st[]** of size  **n**, find the middle element of the stack

 **Note:**  In case of even elements, return the first middle from bottom.

 **Examples:** 

```
Input: st[] = [1, 2, 3, 4, 5]
Output: 3
Explanation: The middle elements is 3.
```

```
Input: st[] = [1, 2, 3, 4]
Output: 2
Explanation: The two middle elements are 2 and 3. Since we need the middle element closer to the bottom, the answer is 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T08:50:33.427Z  

```cpp
class Solution {
  public:
    int stackMiddle(stack<int>& st){
        int n = st.size();
        for(int  i = 0 ; i < n/2 ; i++){
            st.pop();
        }
        return st.top();
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/middle-of-stack/1)