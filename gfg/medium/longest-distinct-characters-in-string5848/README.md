# Longest Substring with Distinct Characters

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string  **s**, find the length of the longest substring with all distinct characters. 

 **Examples:** 

```
Input: s = "geeksforgeeks"
Output: 7
Explanation: "eksforg" is the longest substring with all distinct characters.

```

```
Input: s = "aaa"
Output: 1
Explanation: "a" is the longest substring with all distinct characters.

```

```
Input: s = "abcdefabcbb"
Output: 6
Explanation: The longest substring with all distinct characters is "abcdef", which has a length of 6.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-26T13:07:33.442Z  

```cpp
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        set<int>st;
        int i = 0 , j = 0 , count = 0;
        while(i < s.size()){
            while(st.find(s[i] )!= st.end()){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            count = max(count , i - j + 1);
            i++;
        }
        return count;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1)