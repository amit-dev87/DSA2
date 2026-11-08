# Sort Characters By Frequency

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string `s`, sort it in  **decreasing order**  based on the  **frequency**  of the characters. The  **frequency**  of a character is the number of times it appears in the string.

Return  *the sorted string*. If there are multiple answers, return  *any of them*.

 

 **Example 1:** 

```
Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

```

 **Example 2:** 

```
Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.

```

 **Example 3:** 

```
Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.

```

 

 **Constraints:** 

- 1 <= s.length <= 5 * 105
- s consists of uppercase and lowercase English letters and digits.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 69.75%)  
**Memory:** 11.3 MB (beats 35.87%)  
**Submitted:** 2026-11-08T06:06:25.779Z  

```cpp
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<int,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x : mp){
            pq.push({x.second,x.first});
        }
        string ans = "";
         while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            ans += string(x.first,x.second);
         }
         return ans;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sort-characters-by-frequency/)