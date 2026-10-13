# Parenthesis Checker

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string  **s**, composed of different combinations of '(', ')', '{', '}', '[', ']'. Determine whether the Expression is  **balanced** or not.
An expression is balanced if:

- Each opening bracket has a corresponding closing bracket of the same type.
- Opening brackets must be closed in the correct order.

 **Examples :** 

```
Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
```

```
Input: s = "[()()]{}"
Output: true
Explanation: All the brackets are well-formed.

```

```
Input: s = "([]"
Output: false
Explanation: The expression is not balanced as there is a missing ')' at the end.

```

```
Input: s = "([{]})"
Output: false
Explanation: The expression is not balanced as there is a closing ']' before the closing '}'.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T02:08:05.609Z  

```cpp
class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char>st;
        for(char i : s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }else{
                if(!st.empty() && st.top()== '(' && i == ')'){
                    st.pop();
                }else if(!st.empty() && st.top()== '{' && i == '}'){
                    st.pop();
                }else if(!st.empty() && st.top()== '[' && i == ']'){
                    st.pop();
                }else{
                    st.push(i);
                }
            }
        }
        return st.empty();
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1)