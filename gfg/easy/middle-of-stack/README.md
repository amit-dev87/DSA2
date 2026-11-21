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
**Submitted:** 2026-11-21T08:27:03.914Z  

```cpp
class Solution {
  public:
    int stackMiddle(stack<int>& st) {
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans[ans.size()/2];
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/middle-of-stack/1)