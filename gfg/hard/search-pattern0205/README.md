# Search Pattern

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given two strings, a text string  **txt**  and a pattern string  **pat**, both consisting of lowercase English alphabets. Return the starting  **indices**  (0-based) of all the occurrences of the pattern string pat in the text string txt.

 **Note:** Return an empty list in case of no occurrences of pattern.

 **Examples:** 

```
Input: txt = "geeksforgeeks", pat = "geek"
Output: [0, 8]
Explanation: The string "geek" occurs twice in txt, one starts at index 0 and the other at index 8.

```

```
Input: txt = "abesdu", pat = "edu"
Output: []
Explanation: There's no substring "edu" present in txt.

```

```
Input: txt = "aabaacaadaabaaba", pat = "aaba"
Output: [0, 9, 12]
Explanation:

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-03T12:39:29.941Z  

```cpp
class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        int n = pat.size() , m = txt.size();
        vector<int>ans;
        for(int i = 0 ; i <= m - n  ; i++){
            if(txt.substr(i,n) == pat){
                ans.push_back(i);
            }
        }
       return ans; 
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/search-pattern0205/1)