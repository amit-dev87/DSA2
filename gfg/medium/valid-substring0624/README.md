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
**Submitted:** 2026-10-19T03:03:53.170Z  

```cpp
class Solution {
  public:
    int maxLength(string& s) {
        int  left = 0 , right  = 0 , m = 0;
        for(int i =0 ; i < s.size() ; i ++){
            if(s[i] == '('){
                left++;
            }else{
                right++;
            }
            
            if(left == right){
                m = max(m, 2 * right);
            }else if (right  > left){
                right = left = 0;
            }
        }
        
        right = left = 0;
        for(int i =s.size() - 1 ; i >= 0  ; i--){
            if(s[i] == '('){
                left++;
            }else{
                right++;
            }
            
            if(left == right){
                m = max(m, 2 * left);
            }else if (left  > right){
                right = left = 0;
            }
        }
        return m;
    }
        
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/valid-substring0624/1)