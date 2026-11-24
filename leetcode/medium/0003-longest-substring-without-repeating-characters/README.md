# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

Original
C++
 **Example 1:** 

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

```

 **Example 2:** 

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

```

 **Example 3:** 

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

```

 

 **Constraints:** 

- 0 <= s.length <= 105
- s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** C++  
**Runtime:** 344 ms (beats 12.40%)  
**Memory:** 81.2 MB (beats 26.34%)  
**Submitted:** 2026-11-24T11:28:51.179Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int count = 0;
        int i = 0 , j = 0;
        while( j < s.size()){
            while(st.find(s[j]) != st.end()){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            count = max(count , j - i + 1);
            j++;
        }
        return count;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)