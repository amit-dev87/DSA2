# Reverse a Stack

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a stack  **st[].**  You have to reverse the stack.

 **Note:** The input array represents the stack from bottom to top (last element is the top). The output is displayed by printing elements from top to bottom after reversal.

 **Examples:** 

```
Input: st[] = [1, 2, 3, 4]
Output: [1, 2, 3, 4]
Explanation: After reversing, the elements of stack are in opposite order.

```

```
Input: st[] = [3, 2, 1]
Output: [3, 2, 1]
Explanation: After reversing, the elements of stack are in opposite order.

```

 **Constraints:** 
1 ≤ st.size() ≤ 100
0 ≤ stack element ≤ 100

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T02:27:36.492Z  

```cpp
class Solution {
  public:
    void reverseStack(stack<int> &st) {
        stack<int>st2;
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        st=st2;
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/reverse-a-stack/1)