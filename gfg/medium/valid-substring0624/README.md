# Valid Substring

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string  **`s`**  consisting only of opening and closing parentheses  **`'('`**  and `')'`, find the length of the  **longest valid**  (well-formed) parentheses  **substring**.

 **Note:** The length of the smallest valid substring `"()"` is 2.

 **Examples:** 

```
Input: s = "(()("
Output: 2
Explanation: The longest valid substring is "()". Its length is 2. 
```

```
Input: s = "()(())("
Output: 6
Explanation: The longest valid substring is "()(())". Its length is 6.
```

```
Input: s = "(()())"
Output: 6
Explanation: The longest valid substring is "(()())". Its length is 6.
```

 **Constraints:** 
1 ≤ s.size() ≤ 105
s[i] ∈ { '(', ')' }

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-19T02:52:45.700Z  

```cpp
class Solution {
  public:
    int maxLength(string& s) {
        stack<int>st;
        st.push(-1);
        int m = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '('){
                st.push(i);
            }else{
                st.pop();
                
                if(st.empty()){
                    st.push(i);
                }else{
                    m = max(m , i - st.top());
                }
            }
        }
       return m; 
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/valid-substring0624/1)