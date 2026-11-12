# Is Binary Number Multiple of 3

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a binary number as a string of characters ('0' and '1'). Your task is to determine whether this binary number is divisible by 3. 
 **Note:**  Try to accomplish this using a single traversal of the input binary string.

 **Examples:** 

```
Input: s = "100"
Output: false
Explanation: "100"'s decimal equivalent is 4, which is not divisible by 3.
```

```
Input: s = "0011"
Output: true
Explanation: "0011" is 3, which is divisible by 3.
```

```
Input: s = "110"
Output: true
Explanation: The decimal equivalent of "110" is 6, which is divisible by 3.
```

 **Constraints:** 
1 ≤ s.size() ≤ 106
The string s contains only '0' and '1'.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-12T06:57:50.320Z  

```cpp
class Solution {
  public:
    bool isMultipleOf3(string& s) {
        int ans = 0;
        for(int i = 0 ; i  < s.size() ; i++){
            ans =( ans * 2 + (s[i] - '0'))%3;
        }

       return ans == 0; 
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1)