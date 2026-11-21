# Delete Mid of Stack

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a stack  **s**, delete the middle element of the stack without using any additional data structure. The middle element is defined as the floor(size of stack + 1) / 2)-th element from the bottom of the stack (using 1-based indexing).

 **Note**  **:**  The output shown by the compiler is the stack from top to bottom.

 **Examples:** 

```
Input: s = [10, 20, 30, 40, 50]
Output: [50, 40, 20, 10]
Explanation: The bottom-most element will be 10 and the top-most element will be 50. Middle element will be element at index 3 from bottom, which is 30. Deleting 30, stack will look like [10, 20, 40, 50].

```

```
Input: s = [10, 20, 30, 40]
Output: [40, 30, 10]
Explanation: The bottom-most element will be 10 and the top-most element will be 40. Middle element will be element at index 2 from bottom, which is 20. Deleting 20, stack will look like [10, 30, 40].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T08:48:00.847Z  

```cpp
class Solution {
  public:
    void deleteMid(stack<int>& st) {
        stack<int>ans;
        int n = st.size();
        for(int i = 0 ; i < n/2 ; i++){
            ans.push(st.top());
            st.pop();
        }
        st.pop();
        while(!ans.empty()){
            st.push(ans.top());
            ans.pop();
        }
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1)